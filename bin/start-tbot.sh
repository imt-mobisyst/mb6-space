#!/usr/bin/env bash

# Go in mb6-space
cd `dirname $0`/..

echo "#    I N I T I A L I Z E   R O S"
source ./bin/station-run-commands.bash

echo "#    R U N   T B O T"
ros2 launch tbot_node minimal_launch.yaml
