import rclpy
import sys  # Add this line to import the sys module
from rclpy.action import ActionClient
from rob599_hw2_msgs.action import LaunchRocket

def feedback_callback(feedback_msg):
    print(f'Countdown: {feedback_msg.progress}')

def main(args=None):
    rclpy.init(args=args)
    action_client = ActionClient(
        rclpy.create_node('nasa_client'),
        LaunchRocket,
        'launch_rocket')

    if len(sys.argv) > 1:
        seconds = int(sys.argv[1])
    else:
        seconds = 10

    goal_msg = LaunchRocket.Goal(seconds=seconds)

    future = action_client.send_goal_async(goal_msg, feedback_callback=feedback_callback)

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
