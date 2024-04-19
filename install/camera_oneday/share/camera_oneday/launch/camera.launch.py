import os
from ament_index_python import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    param_dir = LaunchConfiguration(
        'param_dir',
        default=os.path.join(
        get_package_share_directory('camera_oneday'),
        'param/',
        'size.yaml'
        )
    )

    binary_param_dir = os.path.join(
        get_package_share_directory('camera_oneday'),
        'param/',
        'binary.yaml'
    )

    return LaunchDescription(
        [
            DeclareLaunchArgument(
                'param_dir',
                default_value=param_dir
            ),

            Node(
                package='camera_oneday',
                executable='img_publisher',
                name='img_publisher',
                parameters=[param_dir],
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='red_publisher',
                name='red_publisher',
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='blue_publisher',
                name='blue_publisher',
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='green_publisher',
                name='green_publisher',
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='binary_publisher',
                name='binary_publisher',
                parameters = [binary_param_dir],
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='blur_publisher',
                name='blur_publisher',
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='canny_publisher',
                name='canny_publisher',
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='combined_publisher',
                name='combined_publisher',
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='cartoon_publisher',
                name='cartoon_publisher',
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='control_publisher',
                name='control_publisher',
                parameters=[param_dir],
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='optical_publisher',
                name='optical_publisher',
                parameters=[param_dir],
                output='screen'
            ),
            Node(
                package='camera_oneday',
                executable='edge_publisher',
                name='edge_publisher',
                parameters=[param_dir],
                output='screen'
            ),
        ]
    )
    