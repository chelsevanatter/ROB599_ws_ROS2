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
		
        # Declare parameters and set default values 
		self.declare_parameters(
			namespace = "",
            parameters = [
                ('linear_max', 100.0),
                ('angular_max', 100.0)])
	
    # This callback will be called whenever we receive a new message on the topic.
	def callback(self, msg):
		linear_max = self.get_parameter('linear_max').get_parameter_value().double_value
		angular_max = self.get_parameter('angular_max').get_parameter_value().double_value
		#self.get_logger().info(
		#			f"Maximum Linear Speed: {linear_max}. "
		#			f"Maximum Angular Speed: {angular_max}")


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