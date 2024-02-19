#!/usr/bin/env python3

# Node that publishes Twist messages with linear and rotational velocities
#
# twist_publisher.py
#
# Chelse VanAtter
#
# This node publishes a twist message on the topic speed_in.

# rclpy is the basic Python ROS2 stuff
# Node is the class we're going to use to set up the node.
import rclpy
from rclpy.node import Node

# We're going to subscribe to and publish a twist message.
from geometry_msgs.msg import Twist

import threading


class TwistTesterNode(Node):
	'''
	This node publishes Twist messages to a topic speed_in.
	'''
	def __init__(self):
		# Initialize the parent class, giving it a name.  The idiom is to use the
		# super() class.
		super().__init__('twist_tester')
		
        # Create the subscriber.
		self.sub = self.create_subscription(Twist, 'speed_in', self.callback, 10)

		self.received_msgs = 0
		self.outside_bounds_msgs = 0
		self.lock = threading.Lock()
		# Timer for logging statistics every 30 seconds
		self.timer = self.create_timer(10, self.log_statistics)

		self.declare_parameters(
			namespace = "",
            parameters = [
                ('linear_max', 100.0),
                ('angular_max', 100.0)])


	# This functon will be called on a timer to publish a new message on the topic.
	def callback(self, msg):
		linear_max = self.get_parameter('linear_max').get_parameter_value().double_value
		angular_max = self.get_parameter('angular_max').get_parameter_value().double_value
		with self.lock:
			self.received_msgs += 1
			if abs(msg.linear.x) > linear_max or \
               abs(msg.linear.y) > linear_max or \
               abs(msg.linear.z) > linear_max or \
               abs(msg.angular.x) > angular_max or \
               abs(msg.angular.y) > angular_max or \
               abs(msg.angular.z) > angular_max:
				self.outside_bounds_msgs += 1
	def log_statistics(self):
		with self.lock:
			proportion = 0
			if self.received_msgs != 0:
				proportion = self.outside_bounds_msgs / self.received_msgs
				self.get_logger().info(
					f"Received {self.received_msgs} messages in the last 30 seconds. "
					f"Proportion of messages with values outside bounds: {proportion:.2f}"
					f"Linear max: {self.get_parameter('linear_max').get_parameter_value().double_value}"
					f"Angular max: {self.get_parameter('angular_max').get_parameter_value().double_value}")

# This is a general-purpose entry point.	
def main(args=None):
	# Initialize rclpy.  We should do this every time.
	rclpy.init(args=args)

	# Make a node class.  The idiom in ROS2 is to encapsulte everything in a class
	# that derives from Node.
	twist_tester = TwistTesterNode()

	# The spin() call gives control over to ROS2, and it now takes a Node-derived
	# class as a parameter.
	rclpy.spin(twist_tester)

	# Make sure we shutdown everything cleanly.  This should happen, even if we don't
	# include this line, but you should do it anyway.
	rclpy.shutdown()


# If we run the node as a script, then we're going to start here.
if __name__ == '__main__':
	# The idiom in ROS2 is to set up a main() function and to call it from the entry
	# point of the script.
	main()