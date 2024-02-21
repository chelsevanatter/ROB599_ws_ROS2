import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rob599_hw2_msgs.action import LaunchRocket
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from time import sleep

class NASAActionServer(Node):

    def __init__(self):
        super().__init__('nasa')
        self._action_server = ActionServer(
            self,
            LaunchRocket,
            'launch_rocket',
            self.execute_callback, 
            callback_group=ReentrantCallbackGroup(),
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback)
    
    def goal_callback(self, goal_request):
        self.get_logger().info(f'Received launch request for countdown {goal_request.seconds}')
        # Accept all goals
        return rclpy.action.GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Launch aborted!')
        return rclpy.action.CancelResponse.ACCEPT
    
    async def execute_callback(self, goal_handle):
        self.get_logger().info('Executing launch rocket goal...')

        feedback_msg = LaunchRocket.Feedback()

        # Start countdown
        for i in range(goal_handle.request.seconds, 0, -1):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Launch canceled!')
                return LaunchRocket.Result(message='rocket launched!')

            feedback_msg.progress = i
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Countdown: {i}')
            
            # Wait for a short duration to simulate the countdown
            rclpy.spin_once(self, timeout_sec=1)

        # If the countdown completes without cancellation, launch the rocket
        goal_handle.succeed()
        self.get_logger().info('Rocket has launched!')
        # Return a result indicating the rocket has successfully launched
        return LaunchRocket.Result(message='rocket did not launch')

def main(args=None):
    rclpy.init(args=args)
    nasa_server = NASAActionServer()
    
    executor = MultiThreadedExecutor()
    rclpy.spin(nasa_server, executor=executor)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
