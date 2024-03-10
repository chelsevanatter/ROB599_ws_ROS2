import rclpy
from rclpy.node import Node
from rob599_hw2_msgs.srv import MemorizePosition, ClearPositions

class PlacesClient(Node):
    def __init__(self):
        super().__init__('places_client')
        self.memorize_position_client = self.create_client(MemorizePosition, 'memorize_position')
        self.clear_positions_client = self.create_client(ClearPositions, 'clear_positions')

    async def memorize_position(self, name):
        request = MemorizePosition.Request()
        request.name = name

        while not self.memorize_position_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        try:
            response = await self.memorize_position_client.call_async(request)
            self.get_logger().info(f'MemorizePosition response: {response.success}')
        except Exception as e:
            self.get_logger().error(f'Service call failed: {str(e)}')

    async def clear_positions(self):
        request = ClearPositions.Request()

        while not self.clear_positions_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        try:
            response = await self.clear_positions_client.call_async(request)
            self.get_logger().info(f'ClearPositions response: {response.success}')
        except Exception as e:
            self.get_logger().error(f'Service call failed: {str(e)}')

def main(args=None):
    rclpy.init(args=args)
    client = PlacesClient()
    rclpy.spin(client)
    rclpy.shutdown()


if __name__ == '__main__':
    rclpy.init(args=None)
    main()


