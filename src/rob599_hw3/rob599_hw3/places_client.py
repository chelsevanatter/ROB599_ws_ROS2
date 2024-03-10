import rclpy
from rclpy.node import Node
from rob599_hw2_msgs.srv import MemorizePosition, ClearPositions, SavePlaces, LoadPlaces
import os
import json
from geometry_msgs.msg import PoseStamped

class PlacesClient(Node):
    def __init__(self):
        super().__init__('places_client')
        self.memorize_position_client = self.create_client(MemorizePosition, 'memorize_position')
        self.clear_positions_client = self.create_client(ClearPositions, 'clear_positions')
        self.save_places_client = self.create_client(SavePlaces, 'save_places')
        self.load_places_client = self.create_client(LoadPlaces, 'load_places')
        self.resources_dir = os.path.join(os.path.dirname(__file__), 'resources')
        self.file_path = "/home/chelse/ros2_ws/src/rob599_hw3/resource/places.json" 
        
    async def memorize_position(self, name):
        request = MemorizePosition.Request()
        request.name = name

        while not self.memorize_position_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('memorize_position service not available, waiting again...')
        try:
            response = await self.memorize_position_client.call_async(request)
            self.get_logger().info(f'MemorizePosition response: {response.success}')
        except Exception as e:
            self.get_logger().error(f'Service call failed: {str(e)}')

    async def clear_positions(self):
        request = ClearPositions.Request()

        while not self.clear_positions_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('clear_positions service not available, waiting again...')
        try:
            response = await self.clear_positions_client.call_async(request)
            self.get_logger().info(f'ClearPositions response: {response.success}')
        except Exception as e:
            self.get_logger().error(f'Service call failed: {str(e)}')

    async def save_places(self):
        request = SavePlaces.Request()
        request.file_path = self.file_path  # Use constant file path
        request.positions = {name: self._serialize_pose(pose) for name, pose in self.positions.items()}

        while not self.save_places_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('save_places service not available, waiting again...')
        try:
            response = await self.save_places_client.call_async(request)
            self.get_logger().info(f'SavePlaces response: {response.success}')
        except Exception as e:
            self.get_logger().error(f'Service call failed: {str(e)}')

    async def load_places(self):
        request = LoadPlaces.Request()
        request.file_path = self.file_path  # Use constant file path

        while not self.load_places_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('load_places service not available, waiting again...')
        try:
            response = await self.load_places_client.call_async(request)
            self.get_logger().info(f'LoadPlaces response: {response.success}')
        except Exception as e:
            self.get_logger().error(f'Service call failed: {str(e)}')

    def _serialize_pose(self, pose):
        return {
            'position': {
                'x': pose.pose.position.x,
                'y': pose.pose.position.y,
                'z': pose.pose.position.z
            },
            'orientation': {
                'x': pose.pose.orientation.x,
                'y': pose.pose.orientation.y,
                'z': pose.pose.orientation.z,
                'w': pose.pose.orientation.w
            }
        }

def main(args=None):
    rclpy.init(args=args)
    client = PlacesClient()
    rclpy.spin(client)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
