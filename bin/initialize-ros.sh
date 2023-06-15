#!env bash

echo "
                    --- SetUp Ros-Repos and dependancies ---
"

sudo apt install -y curl software-properties-common
sudo add-apt-repository universe -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

sudo apt update
sudo apt install -y ros-dev-tools # ament-cmake-python

export ROSDISTRO=iron
echo "
                    --- Install ros-$ROSDISTRO ---
"

sudo apt install -y ros-$ROSDISTRO-desktop

# sudo apt install -y \
#     ros-$ROSDISTRO-slam-toolbox \
#     ros-$ROSDISTRO-navigation2 \
#     ros-$ROSDISTRO-nav2-bringup \

echo "
                    --- Install laser (urg_node) ---
"

sudo apt install -y ros-$ROSDISTRO-urg-node
sudo usermod -a -G dialout `whoami`
