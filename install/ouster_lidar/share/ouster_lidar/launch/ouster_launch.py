from launch import LaunchDescription
import launch_ros.actions

def generate_launch_description():
    return LaunchDescription([
        launch_ros.actions.Node(
            node_namespace= "ouster_lidar", package='ouster_lidar', node_executable='ouster_ros', output='screen'),
        
    ])
