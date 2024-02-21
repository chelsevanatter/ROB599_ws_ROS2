import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.time import Duration
from rob599_hw2_msgs.action import LaunchRocket
from action_msgs.msg import GoalStatus 

class LaunchRocketClient(Node):
    def __init__(self):
        super().__init__('launch_client')
        self.client = ActionClient(self, LaunchRocket, 'launch_rocket')
        self.goal_handle = None  # Store the goal handle

    def send_goal(self, t):
        goal_msg = LaunchRocket.Goal()
        goal_msg.seconds = t  # Update attribute name to 'seconds'
        self.client.wait_for_server()
        self.result = self.client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self.result.add_done_callback(self.goal_response_callback)



    def goal_response_callback(self, future):
        self.goal_handle = future.result()  # Store the goal handle
        if not self.goal_handle.accepted:
            self.get_logger().info('Goal was rejected')
            return

        self.get_logger().info('Goal was accepted')
        self._get_result_future = self.goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Time until launch: {feedback.progress} seconds')

    def get_result_callback(self, future):
        result = future.result().result
        if future.result().status == GoalStatus.STATUS_CANCELED:
            self.get_logger().info('Launch was canceled')
        else:
            launch_status = 'succeeded' if result.message else 'failed or aborted'
            self.get_logger().info(f'Launch {launch_status}')

    def cancel_goal(self):
        if self.goal_handle:
            self.goal_handle.cancel_goal_async()
        else:
            self.get_logger().info('No active launch to cancel.')

def main(args=None):
    rclpy.init(args=args)
    client = LaunchRocketClient()

    # Get the countdown time from the command line argument
    import sys
    if len(sys.argv) > 1:
        countdown_time = int(sys.argv[1])
    else:
        countdown_time = 30  # Default to 30 seconds if no argument provided
    if len(sys.argv) > 1:
        cancel_time = int(sys.argv[2])
    else:
        cancel_time = 60  # Default to 60 seconds if no argument provided

    # Send a goal with the specified countdown time
    client.send_goal(countdown_time)

    # Create a timer to request cancellation after 5 seconds
    timer = client.create_timer(cancel_time, client.cancel_goal)

    # Create a timer to cancel the goal if it hasn't been canceled or completed after countdown_time seconds
    client.create_timer(countdown_time, client.cancel_goal)

    # Spin to process incoming messages and callbacks
    rclpy.spin(client)

    # Cleanup and shutdown
    client.destroy_node()
    rclpy.shutdown()




if __name__ == '__main__':
    main()
