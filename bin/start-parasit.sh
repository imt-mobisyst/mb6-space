#!/usr/bin/env bash

# Update mb6-space.
cd `dirname $0`/..

echo "#    P U L L"
echo "#    mb6-space"
git pull

echo "#    I N I T I A L I Z E   R O S"
source ./bin/pibot-run-commands.bash
sudo ntpdate fr.pool.ntp.org

echo "#    P A T C H E S"
bash ./bin/pibot-patch.sh

echo "#    R U N   P A R A S I T"
export ROS_AUTOMATIC_DISCOVERY_RANGE=SUBNET
ros2 run basic_node parasit