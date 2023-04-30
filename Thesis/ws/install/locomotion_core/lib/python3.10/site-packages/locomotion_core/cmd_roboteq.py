import rclpy
import serial
from rclpy.node import Node

from std_msgs.msg import Int16

roboteq_obj = serial.Serial(
port='/dev/ttyACM0',
baudrate=115200,
parity=serial.PARITY_NONE,
stopbits=serial.STOPBITS_ONE,
bytesize=serial.EIGHTBITS,
timeout=1
)

class motor_driver(Node):

    def __init__(self):
        super().__init__('cmd_roboteq')
        self.inCmd = 0.0
        self.subscription = self.create_subscription(
            Int16,
            'rov/m1/rpm',
            self.cmd_callback_1,
            5)

        self.subscription = self.create_subscription(
            Int16,
            'rov/m2/rpm',
            self.cmd_callback_2,
            5)
        self.subscription  # prevent unused variable warning

    def move_motor(self, val, motor_num):
        payload1 = "!G "+ str(motor_num) + " " + str(-val) + "_"
        roboteq_obj.write(str.encode(payload1))

    def cmd_callback_1(self, msg):
        inCmd = msg.data
        self.move_motor(inCmd, 1)

    def cmd_callback_2(self, msg):
        inCmd = msg.data
        self.move_motor(inCmd, 2)

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = motor_driver()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
