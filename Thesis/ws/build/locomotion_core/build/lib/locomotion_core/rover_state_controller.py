import rclpy
from rclpy.node import Node

from std_msgs.msg import Int16
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist
from std_msgs.msg import Bool
from std_msgs.msg import String

import time
import numpy as np
from . import RoverDescription as Rover

class get_move_cmds(Node):

    def __init__(self):
        super().__init__('rover_state_controler')
        self.subscription = self.create_subscription(
            Twist,
            'rov_cmd_vel',
            self.move_cmd_callback,
            5)
        self.subscription  # prevent unused variable warning

        self.toggle_button = 0  # Toggle button to cycle between states.
        self.rover_modeC = "NEU_M"  # Assigned state of the rover.
        self.toggle_flag = 0     # if flag = 1; locked, flag = 0; free


        # Create the publishers to the roboteq motors.
        timer_period = 0.1  # seconds

        self.pub_du1 = self.create_publisher(Int16, 'rov/m1/rpm', 5)
        self.timer = self.create_timer(timer_period, self.batch_publish)
        self.i = 0

        self.pub_du2 = self.create_publisher(Int16, 'rov/m2/rpm', 5)
        self.timer = self.create_timer(timer_period, self.batch_publish)

        self.pub_du3 = self.create_publisher(Int16, 'rov/m3/rpm', 5)
        self.timer = self.create_timer(timer_period, self.batch_publish)

        self.pub_du4 = self.create_publisher(Int16, 'rov/m4/rpm', 5)
        self.timer = self.create_timer(timer_period, self.batch_publish)

        self.link_vector = (205, 170)
        self.radius = 63.5

        self.rpm_vec = [0, 0, 0, 0]

    # def kinematic_equation(self, radius, link_vector, velocity_vector):
    #     # Link lengths.
    #     l1 = self.link_vector[0]
    #     l2 = self.link_vector[1]
        
    #     # Kinematic matrix.
    #     kineMatrix = np.array([[1, 1, (l1+l2)],
    #                           [1, -1, -(l1+l2)],
    #                           [1, -1, (l1+l2)],
    #                           [1, 1, -(l1+l2)]])

    #     # Kinematic equation to retrieve angular velocity vector.
    #     angular_vel_vector = 1/radius * np.dot(kineMatrix, velocity_vector)
    #     # print(angular_vel_vector)
    #     return angular_vel_vector

    def pub_velocities(self, msg, angular_vel, weight, publisher):
        msg.data = int(self.rpm_vec[angular_vel]*weight)

        publisher.publish(msg)
        self.i += 1

    def batch_publish(self):
        msg = Int16()
        self.pub_velocities(msg, 0, 1000, self.pub_du1)
        self.pub_velocities(msg, 1, 1000, self.pub_du2)
        self.pub_velocities(msg, 2, 1000, self.pub_du3)
        self.pub_velocities(msg, 3, 1000, self.pub_du4)

    def move_cmd_callback(self, msg):
        vel_vector = (msg.linear.x * 100, msg.linear.y * 100, msg.angular.z)
        
        rov = Rover.RoverDescription('RobArm', ((205, 170), 63.5))
        angular_vel_vector = rov.kinematic_equation(vel_vector)

        # Write the code to publish the angular velocities to the roboteq drivers.
        self.rpm_vec = angular_vel_vector

    # def du1_callback(self):
    #     msg = Int16()
    #     msg.data = int(self.rpm_vec[0]*1000)

    #     # Publish to all the motor drivers.
    #     self.pub_du1.publish(msg)
    #     self.i += 1

    

    # def du2_callback(self):
    #     msg = Int16()
    #     msg.data = int(self.rpm_vec[1]*1000)
    #     self.pub_du2.publish(msg)
    #     self.i += 1

    # def du3_callback(self):
    #     msg = Int16()
    #     msg.data = int(self.rpm_vec[2]*1000)

    #     # Publish to all the motor drivers.
    #     self.pub_du3.publish(msg)
    #     self.i += 1

    # def du4_callback(self):
    #     msg = Int16()
    #     msg.data = int(self.rpm_vec[3]*1000)

    #     # Publish to all the motor drivers.
    #     self.pub_du4.publish(msg)
    #     self.i += 1

def main(args=None):
    rclpy.init(args=args)

    sub_move_cmds = get_move_cmds()

    rclpy.spin(sub_move_cmds)

    sub_move_cmds.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()