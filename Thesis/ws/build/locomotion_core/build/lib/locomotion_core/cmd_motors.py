import rclpy
from rclpy.node import Node

from std_msgs.msg import Int16

global inCmd
inCmd = 0.0

class du_commander(Node):

    def __init__(self):
        super().__init__('du1_commander')
        self.subscription = self.create_subscription(
            Int16,
            'r4/du1/pwr',
            self.du_callback,
            5)
        self.subscription  # prevent unused variable warning

    def du_callback(self, msg):
        global inCmd
        inCmd = msg.data

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = du_commander()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
