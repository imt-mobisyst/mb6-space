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

# Configure the environemnt

echo "

# mb6 ROS environment:
source ~/mb6-space/run-command.bash" >> ~/.bashrc

source run-command.bash

colcon build

echo "
                    --- Install laser (urg_node) ---
"

sudo apt install -y ros-$ROSDISTRO-urg-node
sudo usermod -a -G dialout `whoami`

