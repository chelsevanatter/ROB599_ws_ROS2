import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # Import the String message type
import serial
import csv
import time

class ArduinoNode(Node):
    def __init__(self):
        super().__init__('arduino_csv_creator')
        self.declare_parameter('serial_port', '/dev/ttyACM0')
        self.declare_parameter('baud_rate', 57600)
        self.declare_parameter('csv_file', 'arduino_data.csv')

        serial_port = self.get_parameter('serial_port').value
        baud_rate = self.get_parameter('baud_rate').value
        csv_file = self.get_parameter('csv_file').value

        self.ser = serial.Serial(serial_port, baud_rate, timeout=5)
        self.csv_file = csv_file

    def run_until_no_data(self):
        with open(self.csv_file, 'w', newline='') as file:
            writer = csv.writer(file)
            writer.writerow(['Iteration', 'Time_Stamp', 'Load_Cell_Reading', 'Motor_Steps'])
            
            while True:
                line = self.ser.readline().decode().strip()
                if line:
                    data = line.split(', ')
                    writer.writerow(data)
                    self.get_logger().info(f'Data written: {data}')
                else:
                    self.get_logger().info("No more data received. Exiting...")
                    break


def main(args=None):
    print("Set the height then type 1")
    go = int(input("type 1 and hit enter when you are done setting the height, then press the start button: "))
    while go != 1:
        time.sleep(0.1)
        print("waiting...")
        go = int(input("type 1 and hit enter when you are done setting the height, then press the start button: "))
    print("waiting 5 seconds for you to hit the start button")
    time.sleep(1)

    rclpy.init(args=args)
    node = ArduinoNode()
    node.run_until_no_data()

if __name__ == '__main__':
    main()
