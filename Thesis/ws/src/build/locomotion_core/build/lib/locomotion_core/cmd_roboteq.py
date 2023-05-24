import rclpy
import serial
from rclpy.node import Node
import time
from std_msgs.msg import Int16
from std_msgs.msg import Int32MultiArray

class MotorDriver(Node):

    def __init__(self):
        super().__init__('cmd_roboteq')

        self.initialized_flag = False

        try:
            # Attempt to initialize the roboteq controllers.
            self.roboteq_front = serial.Serial(
                port='/dev/ttyACM0',
                baudrate=115200,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                bytesize=serial.EIGHTBITS,
                timeout=1
            )

            self.roboteq_back = serial.Serial(
                port='/dev/ttyACM1',
                baudrate=115200,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                bytesize=serial.EIGHTBITS,
                timeout=1
            )
            print('Sucessfully accessed the roboteq controllers.')
            self.initialized_flag = True
        except:
            print('Unable to access serial ports.')

        # Initialize the 4 motor drivers on the rover.
        self.subscription = self.create_subscription(
            Int32MultiArray,
            'rov/motors',
            self.cmd_callback_1,
            5)

        self.subscription  # prevent unused variable warning

    # Constructs a payload for the motor drivers.
    def move_motor(self, msg):
        for i in range(2):
            payload_front = "!G "+ str(i+1) + " " + str(-msg[i]) + "_"
            payload_back = "!G "+ str(i+1) + " " + str(-msg[i+2]) + "_"
            if self.initialized_flag:
                self.roboteq_front.write(str.encode(payload_front))
                self.roboteq_back.write(str.encode(payload_back))
                print('in')
            
    # Passes the callback into the driver nodes.
    def cmd_callback_1(self, msg):
        inCmd = msg.data
        self.move_motor(inCmd)
 

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
