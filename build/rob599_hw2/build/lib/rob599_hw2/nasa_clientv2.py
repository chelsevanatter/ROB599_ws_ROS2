import rclpy
from rclpy.action import ActionClient
from rob599_hw2_msgs.action import LaunchRocket
import sys

def main(args=None):
    rclpy.init(args=args)
    action_client = ActionClient(
        rclpy.create_node('nasa_client'),
        LaunchRocket,
        'launch_rocket')

    goal_msg = LaunchRocket.Goal(seconds=20)

    future = action_client.send_goal_async(goal_msg)

    if len(sys.argv) > 1 and sys.argv[1] == 'cancel':
        # Request cancellation if 'cancel' argument is provided
        future.cancel()

    rclpy.spin_until_future_complete(action_client._node, future)

    if future.result() is not None:
        result = future.result()
        client_logger = action_client._node.get_logger()
        client_logger.info(f'Launch completed: {result}')
    else:
        client_logger.error('Failed to launch rocket')

    action_client.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
