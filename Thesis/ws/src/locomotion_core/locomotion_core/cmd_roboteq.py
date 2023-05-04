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

class MotorDriver(Node):

    def __init__(self):
        super().__init__('cmd_roboteq')

        # Initialize the 4 motor drivers on the rover.
        self.subscription = self.create_subscription(
            Int16,
            'rov/m1/rpm',
            lambda msg: self.cmd_callback(msg, 1),,
            5)

        self.subscription = self.create_subscription(
            Int16,
            'rov/m2/rpm',
            lambda msg: self.cmd_callback(msg, 2),,
            5)

        self.subscription = self.create_subscription(
            Int16,
            'rov/m3/rpm',
            lambda msg: self.cmd_callback(msg, 3),,
            5)

        self.subscription = self.create_subscription(
            Int16,
            'rov/m4/rpm',
            lambda msg: self.cmd_callback(msg, 4),
            5)

        self.subscription  # prevent unused variable warning

    # Constructs a payload for the motor drivers.
    def move_motor(self, val, motor_num):
        payload = "!G "+ str(motor_num) + " " + str(-val) + "_"
        roboteq_obj.write(str.encode(payload))

    # Passes the callback into the driver nodes.
    def cmd_callback_1(self, msg, motor_num):
        inCmd = msg.data
        self.move_motor(inCmd, motor_num)

# Main function for the node.
def main(args=None):
    # Initialize rclpy node.
    rclpy.init(args=args)
    moter_driver_node = MotorDriver()
    rclpy.spin(moter_driver_node)
    moter_driver_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
