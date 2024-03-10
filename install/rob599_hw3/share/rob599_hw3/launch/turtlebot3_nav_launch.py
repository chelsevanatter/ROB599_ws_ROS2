from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription, SetEnvironmentVariable
from launch.launch_description_sources import PythonLaunchDescriptionSource

from ament_index_python.packages import get_package_share_directory

import os

def generate_launch_description():
    # Define the path to your custom map using FindPackageShare
    custom_map_path = '/home/chelse/ros2_ws/src/rob599_hw3/resource/map.yaml'

    return LaunchDescription([
        # Set the Turtlebot 3 model environment variable
        SetEnvironmentVariable('TURTLEBOT3_MODEL', 'burger'),

        # Start the Turtlebot 3 simulation in Gazebo.
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(
                    get_package_share_directory('turtlebot3_gazebo'),
                    'launch/turtlebot3_house.launch.py'
                )
            ]),
            launch_arguments={
                'x_pose': '-1.5',
                'y_pose': '1.5'
            }.items()
        ),

        # Start up the Navigation Stack
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(
                    get_package_share_directory('turtlebot3_navigation2'),
                    'launch/navigation2.launch.py'
                )
            ]),
            launch_arguments={
                'use_sim_time': 'True',
                'map': custom_map_path,  # Provide the path to your custom map here
                'params_file': os.path.join(
                    get_package_share_directory('turtlebot3_navigation2'),
                    '/opt/ros/humble/share/nav2_bringup/params/nav2_params.yaml'
                )
            }.items()
        ),

        # TF2 broadcaster node
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_transform_publisher_map_odom',
            output='screen',
            arguments=['1.5', '-1.5', '0', '0', '0', '0', '1', 'map', 'odom']
             ),
    ])
