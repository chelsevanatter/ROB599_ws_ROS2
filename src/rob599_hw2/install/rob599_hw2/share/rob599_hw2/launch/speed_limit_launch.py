# speed_limit_launch.py

import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
        # Launch speed_publisher node
        launch_ros.actions.Node(
            package='rob599_hw2',
            executable='speed_publisher',
            name = 'speed_publisher',
        ),
        # Launch speed_limiting_node with linear_max and angular_max parameters
        launch_ros.actions.Node(
            package='rob599_hw2',
            executable='speed_limiter',
            name = 'speed_limiter',
            parameters=[
                {'linear_max': 100.0},
                {'angular_max': 100.0}
            ]
        ),
        # Launch twist_tester node
        launch_ros.actions.Node(
            package='rob599_hw2',
            executable='twist_tester',
            name = 'twist_tester',
        ),
    ])
