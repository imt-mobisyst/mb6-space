#!/usr/bin/env bash

# Update mb6-space.
cd `dirname $0`/..
git pull

# Update mb6's packages...
if [ -e ./pkg-basic ]; then
    cd pkg-basic
    echo "#    P K G  -  B A S I C"
    git pull
    cd ..
fi
if [ -e ./pkg-tbot ]; then
   cd pkg-tbot
   echo "#    P K G  -  T B O T"
   git pull
   cd ..
fi
if [ -e ./pkg-tsim ]; then
   cd pkg-tsim
   echo "#    P K G  -  T S I M"
   git pull
   cd ..
fi
colcon build

echo "#    P A T C H E S"
bash ./bin/station-patch.sh

echo "#    I N I T I A L I Z E   R O S"
sudo ntpdate fr.pool.ntp.org
source ./bin/run-commands.bash

echo "#    R U N   P A R A S I T"
ros2 run basic_node parasit
