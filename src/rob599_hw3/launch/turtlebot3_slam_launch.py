from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, SetEnvironmentVariable
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from ament_index_python.packages import get_package_share_directory

import os

def generate_launch_description():
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

        # Start up the SLAM system.
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(
                    get_package_share_directory('turtlebot3_cartographer'),
                    'launch/cartographer.launch.py'
                )
            ]),
            launch_arguments={
                'use_sim_time': 'True'
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
                'params_file': os.path.join(
                    get_package_share_directory('turtlebot3_navigation2'),
                    '/opt/ros/humble/share/nav2_bringup/params/nav2_params.yaml'
                )
            }.items()
        ),
    ])
