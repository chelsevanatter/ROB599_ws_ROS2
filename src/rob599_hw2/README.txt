ROB 599 Homework 2 README

Chelse VanAtter

To run this code use these steps:
	1. Use the command ros2 launch rob599_hw2 speed_limit_launch.py 
	2. Use the command ros2 run rob599_hw2 nasa 
	3. Use the command ros2 run rob599_hw2 nasa_client followed by the number of seconds you want 
       to countdown before the rocket launches and the number of seconds until the launch is aborted

To run the service to use brakes, use ros2 service call /apply_brakes rob599_hw2_msgs/srv/ApplyBrakes "{brakes: true}"

To run the action client and set the seconds until the rocket launches (for example 10) and the time until it should abort the launch (for example 3), 
use ros2 run rob599_hw2 nasa_client 10 3