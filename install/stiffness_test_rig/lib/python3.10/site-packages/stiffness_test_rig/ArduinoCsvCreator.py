import rclpy
from rclpy.node import Node
import serial
import csv
import time

class ArduinoNode(Node):
    def __init__(self):
        super().__init__('arduino_node')
        self.declare_parameter('serial_port', '/dev/ttyACM0')
        self.declare_parameter('baud_rate', 57600)
        self.declare_parameter('csv_file', 'arduino_data.csv')

        serial_port = self.get_parameter('serial_port').value
        baud_rate = self.get_parameter('baud_rate').value
        csv_file = self.get_parameter('csv_file').value

        self.ser = serial.Serial(serial_port, baud_rate, timeout=5)
        self.publisher_ = self.create_publisher(String, 'arduino_data', 10)
        self.csv_file = csv_file

        self.timer = self.create_timer(0.1, self.read_and_publish)

    def read_and_publish(self):
        with open(self.csv_file, 'w', newline='') as file:
            writer = csv.writer(file)
            writer.writerow(['Iteration', 'Time_Stamp', 'Load_Cell_Reading', 'Motor_Steps'])
            while True:
                line = self.ser.readline().decode().strip()
                if line:
                    data = line.split(', ')
                    writer.writerow(data)
                    msg = ', '.join(data)
                    self.publisher_.publish(msg)
                    self.get_logger().info(f'Data written and published: {data}')
                else:
                    self.get_logger().info("No more data received. Exiting...")
                    break

def main(args=None):
    rclpy.init(args=args)
    node = ArduinoNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
