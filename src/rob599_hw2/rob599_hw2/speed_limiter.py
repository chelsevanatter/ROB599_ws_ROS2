#!/usr/bin/env python3

# Node that limits linear and rotational speed of a robot in ROS 2
#
# speed_limiting_node.py
#
# Chelse VanAtter
#
# This node subscribes to a twist message on the topic speed_in.  It maintains two velocity contraints and modifies velocity values outside of the constraints. 
# and then republishes the modified velocities on another topic in a twist message on the topic speed_out.


# rclpy is the basic Python ROS2 stuff
# Node is the class we're going to use to set up the node.
import rclpy
from rclpy.node import Node

# We're going to subscribe to and publish a twist message.
from geometry_msgs.msg import Twist

# This gets imports the service from the message package
from rob599_hw2_msgs.srv import ApplyBrakes

import logging


class SpeedLimitingNode(Node):
	'''
	This node subscribes to a topic speed_in publishing Twist messages, constrains the 
	velocities and modifies them if they are outside of the constraints, then publishes 
	the modified velocities in a twist messsage on the topic speed_out.
	'''
	def __init__(self):
		# Initialize the parent class, giving it a name.  The idiom is to use the
		# super() class.
		super().__init__('speed_limiter')

		# Create the publisher first, to make sure it's available before we start the subscriber.
		self.pub = self.create_publisher(Twist, 'speed_out', 10)

		# Create the subscriber.
		self.sub = self.create_subscription(Twist, 'speed_in', self.callback, 10)

		# Create the service
		self.apply_brakes_service = self.create_service(ApplyBrakes, 'apply_brakes', self.apply_brakes_callback)

		self.with_brakes = False  # Track if brakes are applied

		# Declare parameters and set default values 
		self.declare_parameters(
			namespace = "",
            parameters = [
                ('linear_max', 100.0),
                ('angular_max', 100.0),
				('with_watchdog',True),
				('watchdog_period',20)
				])
		
        # Initialize watchdog timer variables
		self.with_watchdog = self.get_parameter('with_watchdog').get_parameter_value().bool_value
		self.watchdog_period = self.get_parameter('watchdog_period').get_parameter_value().double_value
		self.watchdog_timer = None
		
        # Start the watchdog timer
		if self.with_watchdog:
			self.start_watchdog_timer()
			
    # This function creates the watchdog timer        
	def start_watchdog_timer(self):
		if self.watchdog_timer is not None:
			self.watchdog_timer.cancel()
		self.watchdog_timer = self.create_timer(self.watchdog_period, self.watchdog_callback)

		
    # This callback will be called whenever we receive a new message on the topic.
	def callback(self, msg):
		if not self.with_brakes: # Check if brakes are applied
			linear_max = self.get_parameter('linear_max').get_parameter_value().double_value
			angular_max = self.get_parameter('angular_max').get_parameter_value().double_value
			
			# Reset the watchdog timer
			if self.with_watchdog:
				self.start_watchdog_timer()

			# Check if the linear velocity in x, y, and z is greater than the linear_max and if so, set it's value to the linear_max
			if abs(msg.linear.x) > linear_max:
				msg.linear.x = linear_max if msg.linear.x > 0.0 else -linear_max
			if abs(msg.linear.y) > linear_max:
				msg.linear.y = linear_max if msg.linear.y > 0.0 else -linear_max
			if abs(msg.linear.z) > linear_max:
				msg.linear.z = linear_max if msg.linear.z > 0.0 else -linear_max
				
			# Check if the angular velocity in x, y, and z is greater than the angular_max and if so, set it's value to the angular_max
			if abs(msg.angular.x) > angular_max:
				msg.angular.x = angular_max if msg.angular.x > 0.0 else -angular_max
			if abs(msg.angular.y) > angular_max:
				msg.angular.y = angular_max if msg.angular.y > 0.0 else -angular_max
			if abs(msg.angular.z) > angular_max:
				msg.angular.z = angular_max if msg.angular.z > 0.0 else -angular_max

			# Republish the message.  Reusing the original message is slightly more efficient
			# than creating a new one.
			self.pub.publish(msg)
		else:
			zero_msg = Twist()
	
			# Publish zero-velocity Twist message
			zero_msg.linear.x = 0.0
			zero_msg.linear.y = 0.0
			zero_msg.linear.z = 0.0
			zero_msg.angular.x = 0.0
			zero_msg.angular.y = 0.0
			zero_msg.angular.z = 0.0

			self.get_logger().info(
				f"Published zero message because brakes were applied. ")
			self.pub.publish(zero_msg)

	# Watchdog timer callback function
	def watchdog_callback(self):
		zero_msg = Twist()
	
        # Publish zero-velocity Twist message
		zero_msg.linear.x = 0.0
		zero_msg.linear.y = 0.0
		zero_msg.linear.z = 0.0
		zero_msg.angular.x = 0.0
		zero_msg.angular.y = 0.0
		zero_msg.angular.z = 0.0
		#self.get_logger().info(
		#		f"Published zero message because of watdog timer timeout.")

	def apply_brakes_callback(self, request, response):
        # Update the state of brakes based on the request
		self.with_brakes = request.brakes
		response.success = True  # Indicate success
		return response

# This is a general-purpose entry point.	
def main(args=None):
	# Initialize rclpy.  We should do this every time.
	rclpy.init(args=args)

	# Make a node class.  The idiom in ROS2 is to encapsulte everything in a class
	# that derives from Node.
	speed_limiter = SpeedLimitingNode()

	# The spin() call gives control over to ROS2, and it now takes a Node-derived
	# class as a parameter.
	rclpy.spin(speed_limiter)

	# Make sure we shutdown everything cleanly.  This should happen, even if we don't
	# include this line, but you should do it anyway.
	rclpy.shutdown()


# If we run the node as a script, then we're going to start here.
if __name__ == '__main__':
	# The idiom in ROS2 is to set up a main() function and to call it from the entry
	# point of the script.
	main()