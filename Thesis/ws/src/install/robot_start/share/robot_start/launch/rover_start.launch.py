from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    pub_node = Node(
        package="locomotion_core",
        executable="driver",
    )
    
    ld.add_action(pub_node)
    return ld