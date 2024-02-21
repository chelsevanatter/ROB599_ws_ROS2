import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rob599_hw2_msgs.action import LaunchRocket

class NASAActionServer(Node):

    def __init__(self):
        super().__init__('nasa')
        self._action_server = ActionServer(
            self,
            LaunchRocket,
            'launch_rocket',
            self.execute_callback)

    async def execute_callback(self, goal_handle):
        self.get_logger().info('Executing launch rocket goal...')

        feedback_msg = LaunchRocket.Feedback()
        result = LaunchRocket.Result()

        # Start countdown
        for i in range(goal_handle.request.seconds, 0, -1):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                return LaunchRocket.Result()

            feedback_msg.progress = i
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Countdown: {i}')
            
            # Wait for a short duration to simulate the countdown
            rclpy.spin_once(self, timeout_sec=1)

        result.message = 'Rocket launched!'
        self.get_logger().info('Rocket launched!')
        return result

def main(args=None):
    rclpy.init(args=args)
    nasa_server = NASAActionServer()
    rclpy.spin(nasa_server)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
