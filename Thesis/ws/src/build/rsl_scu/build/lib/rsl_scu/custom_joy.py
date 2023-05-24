import rclpy
from rclpy.node import Node

from std_msgs.msg import Int16
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist

class rsl_joy(Node):

    def __init__(self):
        super().__init__('rsl_joy')
        timer_period = 0.1 
        self.vel_pub = self.create_publisher(Twist, 'rov_cmd_vel', 5)
        self.timer = self.create_timer(timer_period, self.mapped_cmd_vel_callback)

        self.subscription = self.create_subscription(
            Joy,
            'joy',
            self.joy_callback,
            5)
        
        self.rsl_axes = []
        self.rsl_buttons = []

    def joy_callback(self, msg):
        self.rsl_axes = msg.axes
        print(self.rsl_axes)

    def mapped_cmd_vel_callback(self):
        mapped_joy = Twist()
        mapped_joy.linear.x = self.rsl_axes[1]
        mapped_joy.linear.y = self.rsl_axes[0]
        mapped_joy.angular.z = self.rsl_axes[3]
        self.vel_pub.publish(mapped_joy)

def main(args=None):
    rclpy.init(args=args)

    rsl_custom_joy = rsl_joy()

    rclpy.spin(rsl_custom_joy)

    rsl_custom_joy.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()