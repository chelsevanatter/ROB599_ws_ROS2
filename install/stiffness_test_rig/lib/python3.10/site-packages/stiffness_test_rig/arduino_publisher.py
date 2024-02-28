import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
import serial
import time

class ArduinoPublisher(Node):
    def __init__(self):
        super().__init__('arduino_publisher')
        
        # Define Arduino serial port and baud rate
        self.declare_parameter('serial_port', '/dev/ttyACM0')
        self.declare_parameter('baud_rate', 57600)

        serial_port = self.get_parameter('serial_port').value
        baud_rate = self.get_parameter('baud_rate').value

        # Open the serial connection to Arduino
        self.arduino = serial.Serial(serial_port, baud_rate, timeout=2)
        self.publisher_ = self.create_publisher(Float64MultiArray, 'arduino_data', 10)
        
        self.HuskyHeight = 430
        self.continue_running = True  # Variable to control whether to continue running

    # Function to send command to Arduino
    def send_command(self, command):
        self.arduino.write(command.encode())   # Send the command to Arduino
        self.get_logger().info(f"Sent command: {command}")   # Debug statement
        time.sleep(1)                      # Wait for Arduino to process the command

    # Function to stop data_subscriber.py
    def stop_data_subscriber(self):
        self.continue_running = False

    # Main function
    def main(self):
        end = 0
        height = self.HuskyHeight
        # Input the experiment number
        ex_num = int(input("Enter the experiment number: "))
        while end != 1:
            # Prompt the user to enter the command ('U' for up, 'D' for down, 'C' to start pushing)
            command = input("Enter 'U' for up, 'D' for down, and 'C' to start pushing: ")
            
            # Validate user input
            if command.upper() in ('C','D','U'):
                if command == 'D' or command == 'U':
                    distance = int(input("Please input distance as int divisible by 5 in mm: "))
                    numExecutions = distance//5
                    for i in range (numExecutions):
                        self.send_command(command.upper()) 
                    if command == 'D':
                        height = height - distance
                    if command == 'U':
                        height = height + distance
                elif command == 'C':
                    # Send the command to Arduino
                    self.send_command(command.upper())
                    while True:
                        line = self.arduino.readline().decode().strip()
                        if line:
                            data = [float(x) for x in line.split(', ')]
                            data.append(float(ex_num))
                            data.append(float(height))
                            
                            msg = Float64MultiArray()
                            msg.data = data
                            
                            self.publisher_.publish(msg)
                            self.get_logger().info('Published data.')
                        else:
                            self.get_logger().info("No more data received. Exiting...")
                            break
            the_end = input("Enter 'end' to end program or hit enter to continue: ")
            if the_end == 'end':
                self.stop_data_subscriber()  # Stop data_subscriber.py
                end = 1
            else:
                self.get_logger().error("Invalid input. Please enter 'F' for forward or 'B' for backward.")

        # Close the serial connection
        self.arduino.close()

def main(args=None):
    rclpy.init(args=args)
    arduino_control = ArduinoPublisher()
    arduino_control.main()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
