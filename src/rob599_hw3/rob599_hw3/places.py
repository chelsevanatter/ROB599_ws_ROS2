import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Point, Quaternion
from visualization_msgs.msg import Marker, MarkerArray
from tf2_ros import TransformListener, Buffer
from rob599_hw2_msgs.srv import MemorizePosition, ClearPositions, SavePlaces, LoadPlaces, KnockKnock
import os
import json
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from rclpy.action import ActionServer
from rob599_hw2_msgs.action import GoTo, Patrol
from rclpy.duration import Duration
from asyncio import sleep

class PlacesNode(Node):
    def __init__(self):
        super().__init__('places')
        self.positions = {}
        self.marker_publisher = self.create_publisher(MarkerArray, 'saved_positions_marker', 10)
        self.memorize_position_service = self.create_service(
            MemorizePosition, 'memorize_position', self.memorize_position_callback
        )
        self.clear_positions_service = self.create_service(
            ClearPositions, 'clear_positions', self.clear_positions_callback
        )
        self.save_places_service = self.create_service(
            SavePlaces, 'save_places', self.save_places_callback
        )
        self.load_places_service = self.create_service(
            LoadPlaces, 'load_places', self.load_places_callback
        )
        self.file_path = "/home/chelse/ros2_ws/src/rob599_hw3/resource/places.json"  # Hardcoded file path
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.navigator = BasicNavigator()

        self._action_server = ActionServer(self, GoTo, 'go_to', self.go_to_callback)
        self.patrol_action_server = ActionServer(self, Patrol, 'patrol', self.execute_patrol_callback)
        self.knock_knock_service = self.create_service(KnockKnock, 'knock_knock', self.knock_knock)

    def memorize_position_callback(self, request, response):
        self.get_logger().info('Memorizing position: ' + request.name)
        current_pose = self.get_current_pose()
        if current_pose:
            self.positions[request.name] = current_pose
            self.publish_markers()
            response.success = True
        else:
            response.success = False
        return response

    def clear_positions_callback(self, request, response):
        self.get_logger().info('Clearing all saved positions')
        self.positions.clear()
        self.clear_markers()
        response.success = True
        return response

    def save_places_callback(self, request, response):
        try:
            with open(self.file_path, 'w') as file:
                json.dump({name: self._serialize_pose(pose) for name, pose in self.positions.items()}, file)
                self.get_logger().info(f'Saved places to {self.file_path}')
                response.success = True
        except Exception as e:
            self.get_logger().error(f'Failed to save places: {e}')
            response.success = False
        return response

    def load_places_callback(self, request, response):
        try:
            with open(self.file_path, 'r') as file:
                data = json.load(file)
                self.positions = {name: self._deserialize_pose(pose_data) for name, pose_data in data.items()}
                self.publish_markers()
                self.get_logger().info(f'Loaded places from {self.file_path}')
                response.success = True
        except FileNotFoundError:
            self.get_logger().error(f'File {self.file_path} not found')
            response.success = False
        except Exception as e:
            self.get_logger().error(f'Failed to load places: {e}')
            response.success = False
        return response

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

    def _deserialize_pose(self, pose_data):
        pose = PoseStamped()
        pose.pose.position = Point(**pose_data['position'])
        pose.pose.orientation = Quaternion(**pose_data['orientation'])
        return pose

    def get_current_pose(self):
        try:
            transform = self.tf_buffer.lookup_transform('map', 'base_link', rclpy.time.Time())
            current_pose = PoseStamped()
            current_pose.header = transform.header

            position = Point()
            position.x = transform.transform.translation.x
            position.y = transform.transform.translation.y
            position.z = transform.transform.translation.z

            current_pose.pose.position = position
            current_pose.pose.orientation = transform.transform.rotation
            return current_pose
        except Exception as e:
            self.get_logger().error('Failed to get current pose: %s' % str(e))
            return None

    def publish_markers(self):
        marker_array = MarkerArray()
        for name, pose in self.positions.items():
            position_marker = Marker()
            position_marker.header.frame_id = 'map'
            position_marker.type = Marker.SPHERE
            position_marker.action = Marker.ADD
            position_marker.scale.x = 0.5
            position_marker.scale.y = 0.5
            position_marker.scale.z = 0.5
            position_marker.color.r = 0.0
            position_marker.color.g = 1.0
            position_marker.color.b = 0.0
            position_marker.color.a = 1.0
            position_marker.pose = pose.pose
            marker_array.markers.append(position_marker)

            text_marker = Marker()
            text_marker.header.frame_id = 'map'
            text_marker.type = Marker.TEXT_VIEW_FACING
            text_marker.action = Marker.ADD
            text_marker.scale.z = 0.5
            text_marker.color.r = 0.0
            text_marker.color.g = 0.0
            text_marker.color.b = 0.0
            text_marker.color.a = 1.0
            text_marker.pose.position = pose.pose.position
            text_marker.pose.orientation.w = 1.0
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

    def knock_knock(self, request, response):
        # Stop any ongoing action
        self.navigator.cancelTask()

        # Load positions from the json file
        self.load_places_callback(LoadPlaces.Request(), LoadPlaces.Response())

        # Send the robot to the front door
        if 'front_door' in self.positions:
            x = self.positions['front_door'].pose.position.x
            y = self.positions['front_door'].pose.position.y
            self.go_to(x, y)
            self.get_logger().info("Robot is moving to the front door")

            # Wait for the robot to reach the front door
            while not self.navigator.isTaskComplete():
                pass

            self.get_logger().info("Knock Knock. Who's there? Orange. Orange who? Orange you glad to be a Clemson Tiger!")
            sleep(3)
        else:
            self.get_logger().error("Place called front door was not found")

        return response

    async def go_to_callback(self, goal_handle):
        goal = goal_handle.request
        if goal.place not in self.positions:
            goal_handle.abort()
            self.get_logger().info(f"Place {goal.place} does not exist")
            return GoTo.Result(success=False, message="Place does not exist")

        # Code to move the robot to the place goes here
        for name, pose in self.positions.items():
            if name == goal.place:
                self.get_logger().info(f"Going to: {pose.pose.position.x}, {pose.pose.position.y}")
                self.go_to(pose.pose.position.x, pose.pose.position.y)

        goal_handle.succeed()
        return GoTo.Result(success=True, message="Successfully moved to the place")

    async def execute_patrol_callback(self, goal_handle):
        feedback_msg = Patrol.Feedback()
        result = Patrol.Result()

        # Load positions from the json file
        self.load_places_callback(LoadPlaces.Request(), LoadPlaces.Response())

        for name, pose in self.positions.items():
            x = pose.pose.position.x
            y = pose.pose.position.y
            self.go_to(x, y)

            # Wait for the robot to reach the position
            while not self.navigator.isTaskComplete():
                feedback = self.navigator.getFeedback()
                self.get_logger().info(
                    f'Estimated time of patrol: {Duration.from_msg(feedback.estimated_time_remaining).nanoseconds / 1e9:.2f} seconds')

            # Check if the goal was canceled
            if not goal_handle.is_active:
                result.success = False
                result.message = "Patrol was cancelled"
                return result

        # Patrol complete
        result.success = True
        result.message = "Patrol complete"
        return result


    def go_to(self, x, y):
        # Set a goal pose.  This is the starting location from our simulation, with an unspecified orientation.
        goal_pose = PoseStamped()
        goal_pose.header.frame_id = 'map'
        goal_pose.header.stamp = self.navigator.get_clock().now().to_msg()
        goal_pose.pose.position.x = x
        goal_pose.pose.position.y = y
        goal_pose.pose.orientation.w = 1.0

        # This moves to goal pose
        self.navigator.goToPose(goal_pose)

        while not self.navigator.isTaskComplete():
            # Give feedback
            feedback = self.navigator.getFeedback()

            self.get_logger().info(
                f'Estimated time of arrival: {Duration.from_msg(feedback.estimated_time_remaining).nanoseconds / 1e9:.2f} seconds')

            # We can cancel tasks.
            if Duration.from_msg(feedback.navigation_time) > Duration(seconds=600.0):
                self.navigator.cancelTask()

        # Did we succeed?
        match self.navigator.getResult():
            case TaskResult.SUCCEEDED:
                self.get_logger().info('Goal succeeded!')
            case TaskResult.CANCELED:
                self.get_logger().info('Goal was canceled!')
            case TaskResult.FAILED:
                self.get_logger().info('Goal failed!')
            case _:
                self.get_logger().info('Goal has an invalid return status!')

def main(args=None):
    rclpy.init(args=args)
    places_node = PlacesNode()
    rclpy.spin(places_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
