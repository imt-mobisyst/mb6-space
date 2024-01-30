#!/usr/bin/env bash

# Update mb6-space.
cd `dirname $0`/..
git pull
source ./bin/pibot-run-commands.bash

echo "#    P A T C H E S"
bash ./bin/pibot-patch.sh

echo "#    I N I T I A L I Z E   R O S"
source ./bin/pibot-run-commands.bash
sudo ntpdate fr.pool.ntp.org

echo "#    R U N   P A R A S I T"
ros2 run basic_node parasit
