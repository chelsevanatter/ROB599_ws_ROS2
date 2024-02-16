#!/usr/bin/env python3

# Node that publishes Twist messages with linear and rotational velocities
#
# speed_publisher.py
#
# Chelse VanAtter
#
# This node publishes a twist message on the topic speed_in.

# rclpy is the basic Python ROS2 stuff
# Node is the class we're going to use to set up the node.
import rclpy
from rclpy.node import Node
import random

# We're going to subscribe to and publish a twist message.
from geometry_msgs.msg import Twist


class TwistPublisher(Node):
	'''
	This node publishes Twist messages to a topic speed_in.
	'''
	def __init__(self):
		# Initialize the parent class, giving it a name.  The idiom is to use the
		# super() class.
		super().__init__('speed_publisher')

		# Create the publisher to publish the Twist message.
		self.pub = self.create_publisher(Twist, 'speed_in', 10)
		
        # Create a timer for how often to publish Twist messages
		self.timer = self.create_timer(1, self.publish_twist)



	# This functon will be called on a timer to publish a new message on the topic.
	def publish_twist(self):
		# Set up a twist msg 
		msg = Twist()
        
        # Check if the linear velocity in x, y, and z is greater than the linear_max and if so, set it's value to the linear_max
		'''
        msg.linear.x = random.uniform(-100.0,200.0)
		msg.linear.y = random.uniform(-100.0,200.0)
		msg.linear.z = random.uniform(-100.0,200.0)
		msg.angular.x = random.uniform(-100.0,200.0)
		msg.angular.y = random.uniform(-100.0,200.0)
		msg.angular.z = random.uniform(-100.0,200.0)
		'''
		
		msg.linear.x = 500.0
		msg.linear.y = 500.0
		msg.linear.z = 500.0
		msg.angular.x = 500.0
		msg.angular.y = 500.0
		msg.angular.z = 500.0
			
		# Republish the message.  Reusing the original message is slightly more efficient
		# than creating a new one.
		self.pub.publish(msg)
		#self.get_logger().info(
		#			f"Publishing a message: {msg}. ")


# This is a general-purpose entry point.	
def main(args=None):
	# Initialize rclpy.  We should do this every time.
	rclpy.init(args=args)

	# Make a node class.  The idiom in ROS2 is to encapsulte everything in a class
	# that derives from Node.
	speed_publisher = TwistPublisher()

	# The spin() call gives control over to ROS2, and it now takes a Node-derived
	# class as a parameter.
	rclpy.spin(speed_publisher)

	# Make sure we shutdown everything cleanly.  This should happen, even if we don't
	# include this line, but you should do it anyway.
	rclpy.shutdown()


# If we run the node as a script, then we're going to start here.
if __name__ == '__main__':
	# The idiom in ROS2 is to set up a main() function and to call it from the entry
	# point of the script.
	main()