import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
import csv
import time

class DataSubscriber(Node):
    def __init__(self):
        super().__init__('data_subscriber')
        
        # Subscribe to the arduino_data topic
        self.subscription = self.create_subscription(
            Float64MultiArray,
            'arduino_data',
            self.data_callback,
            10)
        self.subscription  # Prevent unused variable warning
        
        # Define the CSV file name
        self.declare_parameter('csv_file', 'arduino_data_subscriber.csv')
        self.csv_file = self.get_parameter('csv_file').value
        
        # Write the header to the CSV file
        with open(self.csv_file, 'w', newline='') as file:
            writer = csv.writer(file)
            writer.writerow(['Iteration', 'Time_Stamp', 'Load_Cell_Reading', 'Motor_Steps', 'Experiment_Number', 'Height'])

        # Initialize watchdog timer variables
        self.watchdog_period = 3  # Set watchdog period to 10 seconds
        self.last_message_time = None  # Track the time of the last message
        
    # Function to start the watchdog timer
    def start_watchdog_timer(self):
        if self.last_message_time is None:
            self.last_message_time = time.time()

    # Callback function for receiving data
    def data_callback(self, msg):
        # Update the last message time
        self.last_message_time = time.time()

        # Extract data from the received message
        data = msg.data
        
        # Append data to the CSV file
        with open(self.csv_file, 'a', newline='') as file:
            writer = csv.writer(file)
            writer.writerow(data)
            self.get_logger().info(f'Data written to CSV file: {data}')

    # Main function
    def main(self):
        while True:
            # Check if a timeout has occurred
            if self.last_message_time is not None and time.time() - self.last_message_time > self.watchdog_period:
                self.get_logger().info('Watchdog timer expired. Shutting down...')
                break

            # Spin once to process callbacks
            rclpy.spin_once(self, timeout_sec=1.0)

def main(args=None):
    rclpy.init(args=args)
    data_subscriber = DataSubscriber()
    data_subscriber.main()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
