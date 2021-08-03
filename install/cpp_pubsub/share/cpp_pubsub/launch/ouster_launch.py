from launch import LaunchDescription
import launch_ros.actions

def generate_launch_description():
    return LaunchDescription([
        launch_ros.actions.Node(
            node_namespace= "cpp_pubsub", package='cpp_pubsub', node_executable='talker', output='screen'),
        
    ])
