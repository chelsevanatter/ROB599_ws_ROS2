import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from visualization_msgs.msg import Marker
from rob599_hw2_msgs.srv import MemorizePosition, ClearPositions

class PlacesNode(Node):
    def __init__(self):
        super().__init__('places')
        self.positions = {}
        self.marker_publisher = self.create_publisher(Marker, 'saved_positions_marker', 10)
        self.memorize_position_service = self.create_service(
            MemorizePosition, 'memorize_position', self.memorize_position_callback
        )
        self.clear_positions_service = self.create_service(
            ClearPositions, 'clear_positions', self.clear_positions_callback
        )

    def memorize_position_callback(self, request, response):
        self.get_logger().info('Memorizing position: %s', request.name)
        current_pose = self.get_current_pose()
        self.positions[request.name] = current_pose
        self.publish_markers()
        response.success = True
        return response

    def clear_positions_callback(self, request, response):
        self.get_logger().info('Clearing all saved positions')
        self.positions.clear()
        self.clear_markers()
        response.success = True  # Set success to True since clearing positions was successful
        return response

    def get_current_pose(self):
        # This is just a placeholder. You should replace it with your actual logic to get the current robot pose.
        current_pose = PoseStamped()
        # Fill in the current pose details
        return current_pose

    def publish_markers(self):
        marker = Marker()
        marker.header.frame_id = 'map'
        marker.type = marker.TEXT_VIEW_FACING
        marker.action = marker.ADD
        marker.scale.z = 0.1
        marker.color.r = 1.0
        marker.color.g = 1.0
        marker.color.b = 1.0
        marker.color.a = 1.0
        marker.lifetime = rclpy.time.Duration(seconds=1)
        for name, pose in self.positions.items():
            marker.id += 1
            marker.pose = pose.pose
            marker.text = name
            self.marker_publisher.publish(marker)

    def clear_markers(self):
        marker = Marker()
        marker.header.frame_id = 'map'
        marker.action = marker.DELETEALL
        self.marker_publisher.publish(marker)

def main(args=None):
    rclpy.init(args=args)
    places_node = PlacesNode()
    rclpy.spin(places_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
