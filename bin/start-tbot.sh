#!/usr/bin/env bash

# Go in mb6-space
cd `dirname $0`/..

echo "#    I N I T I A L I Z E   R O S"
<<<<<<< HEAD
source ./bin/pibot-run-commands.bash
=======
source ./bin/run-commands.bash
>>>>>>> master

echo "#    R U N   T B O T"
ros2 launch tbot_node pibot_launch.yaml
