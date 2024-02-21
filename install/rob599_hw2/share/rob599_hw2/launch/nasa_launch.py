import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        # Launch speed_publisher node
        launch_ros.actions.Node(
            package='rob599_hw2',
            executable='nasa',
            name = 'nasa',
        ),
        # Launch speed_limiting_node with linear_max and angular_max parameters
        launch_ros.actions.Node(
            package='rob599_hw2',
            executable='nasa_client',
            name = 'nasa_client',
        ),
    ])
