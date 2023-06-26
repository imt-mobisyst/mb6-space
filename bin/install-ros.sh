#!env bash

./install-ros-setup.sh

export ROSDISTRO=iron
echo "
                    --- Install ros-$ROSDISTRO ---
"

sudo apt install -y ros-$ROSDISTRO-desktop

# sudo apt install -y \
#     ros-$ROSDISTRO-slam-toolbox \
#     ros-$ROSDISTRO-navigation2 \
#     ros-$ROSDISTRO-nav2-bringup \

#echo "source "

echo "
                    --- Install laser (urg_node) ---
"

sudo apt install -y ros-$ROSDISTRO-urg-node
sudo usermod -a -G dialout `whoami`
