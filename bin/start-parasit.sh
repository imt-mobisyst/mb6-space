#!/usr/bin/env bash

# Update mb6-space.
cd `dirname $0`/..

echo "#    P U L L"
echo "#    mb6-space"
git pull

# Update mb6's packages...
for pkg in pkg-basic pkg-tbot pkg-tsim 
do 
if [ -e ./$pkg ]; then
    echo "#    $pkg"
    git -C ./$pkg pull
fi
done

echo "#    P A T C H E S"
bash ./bin/station-patch.sh

echo "#    B U I L D"
colcon build

echo "#    I N I T I A L I Z E   R O S"
source ./bin/run-commands.bash
#sudo ntpdate fr.pool.ntp.org

echo "#    R U N   P A R A S I T"
ros2 run basic_node parasit
