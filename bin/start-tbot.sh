#!/usr/bin/env bash

# Go in mb6-space
cd `dirname $0`/..

echo "#    I N I T I A L I Z E   R O S"
source ./bin/pibot-run-commands.bash


echo "#    R U N   T B O T"

# Multibot launch
# ROS_DOMAIN_ID=99 ros2 launch communication_test multibot.launch.py type:="namespace"
#ros2 launch communication_test multibot.launch.py type:="domain_id"
#ROS_DOMAIN_ID=99 ros2 launch communication_test multibot.launch.py type:="discovery"
#ROS_DOMAIN_ID=99 ros2 launch communication_test multibot.launch.py type:="partitions"
ros2 launch communication_test multibot.launch.py type:="zenoh"
