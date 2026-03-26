#!/usr/bin/env bash
cd `dirname $0`/..

<<<<<<< HEAD
echo "#    P U L L"
echo "#    mb6-space"
git pull

echo "#    I N I T I A L I Z E   R O S"
source ./bin/pibot-run-commands.bash
sudo ntpdate fr.pool.ntp.org

echo "#    P A T C H E S"
bash ./bin/pibot-patch.sh
=======
echo "#    I N I T I A L I Z E   R O S   O N   S U B N E T"
source ../install/setup.bash
export ROS_AUTOMATIC_DISCOVERY_RANGE=SUBNET
>>>>>>> master

echo "#    R U N   P A R A S I T"
ros2 run multibot_domid parasit
