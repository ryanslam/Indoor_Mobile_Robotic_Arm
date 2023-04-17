from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    pub_node = Node(
        package="my_robot_ctrl",
        executable="mynode",
    )
    
    ld.add_action(pub_node)
    return ld