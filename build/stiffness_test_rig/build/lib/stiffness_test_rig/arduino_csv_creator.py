import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # Import the String message type
import serial
import csv
import time

class ArduinoControl(Node):
    def __init__(self):
        super().__init__('arduino_control')
        
        # Define Arduino serial port, baud rate, and csv file name
        self.declare_parameter('serial_port', '/dev/ttyACM0')
        self.declare_parameter('baud_rate', 57600)
        self.declare_parameter('csv_file', 'arduino_data.csv')

        serial_port = self.get_parameter('serial_port').value
        baud_rate = self.get_parameter('baud_rate').value
        csv_file = self.get_parameter('csv_file').value

        # Open the serial connection to Arduino
        self.arduino = serial.Serial(serial_port, baud_rate, timeout=2)
        self.csv_file = csv_file
        
        self.HuskyHeight = 430
        
    # Function to send command to Arduino
    def send_command(self, command):
        self.arduino.write(command.encode())   # Send the command to Arduino
        self.get_logger().info(f"Sent command: {command}")   # Debug statement
        time.sleep(1)                      # Wait for Arduino to process the command

    # Main function
    def main(self):
        end = 0
        height = self.HuskyHeight
        # Input the experiment number
        ex_num = int(input("Enter the experiment number: "))
        while end != 1:
            # Prompt the user to enter the command ('F' for forward, 'B' for backward)
            command = input("Enter 'U' for up, D for down, and C to start pushing: ")
            
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
                elif command =='C':
                    # Send the command to Arduino
                    self.send_command(command.upper())
                    with open(self.csv_file, 'w', newline='') as file:
                        writer = csv.writer(file)
                        writer.writerow(['Iteration', 'Time_Stamp', 'Load_Cell_Reading', 'Motor_Steps','Experiment Number','Height'])
                        
                        while True:
                            line = self.arduino.readline().decode().strip()
                            if line:
                                data = line.split(', ')
                                data.append(str(ex_num))
                                data.append(str(height))
                                
                                writer.writerow(data)
                                self.get_logger().info(f'Data written: {data}')
                            else:
                                self.get_logger().info("No more data received. Exiting...")
                                break
            theEnd = input("Enter 'end' to end program or hit enter to continue: ")
            if theEnd == 'end':
                end = 1
            else:
                self.get_logger().error("Invalid input")

        # Close the serial connection
        self.arduino.close()

def main(args=None):
    rclpy.init(args=args)
    arduino_control = ArduinoControl()
    arduino_control.main()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
