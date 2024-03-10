import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Point
from visualization_msgs.msg import Marker, MarkerArray
from builtin_interfaces.msg import Duration
from tf2_ros import TransformListener, Buffer
from rob599_hw2_msgs.srv import MemorizePosition, ClearPositions

class PlacesNode(Node):
    def __init__(self):
        super().__init__('places')
        self.positions = {}
        self.marker_publisher = self.create_publisher(MarkerArray, 'saved_positions_marker', 10)  # Change the type to MarkerArray
        self.memorize_position_service = self.create_service(
            MemorizePosition, 'memorize_position', self.memorize_position_callback
        )
        self.clear_positions_service = self.create_service(
            ClearPositions, 'clear_positions', self.clear_positions_callback
        )
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

    def memorize_position_callback(self, request, response):
        self.get_logger().info('Memorizing position: ' + request.name)
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
        try:
            transform = self.tf_buffer.lookup_transform('map', 'base_link', rclpy.time.Time())
            current_pose = PoseStamped()
            current_pose.header = transform.header

            # Create a Point message and assign its values to the position field
            position = Point()
            position.x = transform.transform.translation.x
            position.y = transform.transform.translation.y
            position.z = transform.transform.translation.z

            current_pose.pose.position = position
            current_pose.pose.orientation = transform.transform.rotation
            return current_pose
        except Exception as e:
            self.get_logger().error('Failed to get current pose: %s', str(e))
            return None

    def publish_markers(self):
        marker_array = MarkerArray()
        for name, pose in self.positions.items():
            # Add position marker
            position_marker = Marker()
            position_marker.header.frame_id = 'map'
            position_marker.type = Marker.SPHERE
            position_marker.action = Marker.ADD
            position_marker.scale.x = 0.5
            position_marker.scale.y = 0.5
            position_marker.scale.z = 0.5
            position_marker.color.r = 1.0
            position_marker.color.g = 0.0
            position_marker.color.b = 0.0
            position_marker.color.a = 1.0
            position_marker.pose = pose.pose
            marker_array.markers.append(position_marker)
            
            # Add text marker
            text_marker = Marker()
            text_marker.header.frame_id = 'map'
            text_marker.type = Marker.TEXT_VIEW_FACING
            text_marker.action = Marker.ADD
            text_marker.scale.z = 0.5
            text_marker.color.r = 1.0
            text_marker.color.g = 1.0
            text_marker.color.b = 1.0
            text_marker.color.a = 1.0
            text_marker.pose.position = pose.pose.position
            text_marker.pose.orientation.w = 1.0  # Set an arbitrary orientation
            text_marker.text = name
            marker_array.markers.append(text_marker)
    
        self.marker_publisher.publish(marker_array)


    def clear_markers(self):
        marker_array = MarkerArray()
        marker = Marker()
        marker.header.frame_id = 'map'
        marker.action = marker.DELETEALL
        marker_array.markers.append(marker)
        self.marker_publisher.publish(marker_array)

def main(args=None):
    rclpy.init(args=args)
    places_node = PlacesNode()
    rclpy.spin(places_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
