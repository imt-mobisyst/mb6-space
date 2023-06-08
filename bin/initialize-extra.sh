#!/usr/bin/env bash

echo "
                    --- Classical libs ---
"

sudo apt install -y libopencv-dev python3-opencv

# Clone and initialize vcpkg:
echo "
                    --- Install realsense via vcpkg ---
"

cd 
git clone https://github.com/Microsoft/vcpkg.git .vcpkg
~/.vcpkg/bootstrap-vcpkg.sh
~/.vcpkg/vcpkg install realsense2
pip install pyrealsense2

# CMake config:
#find_package(realsense2 CONFIG REQUIRED)
#target_link_libraries(main PRIVATE realsense2::fw realsense2::usb realsense2::realsense2 realsense2::realsense-file)

# Some dependancies:
#sudo apt install -y autoconf dh-autoreconf libudev-dev cmake

#cd ..
#./script/setup_udev_rules.sh

#pip install pyrealsense2
#pip3 install pyrealsense2

echo "
                    --- Install laser (urg_node) ---
"

sudo apt install -y ros-iron-urg-node
sudo usermod -a -G dialout `whoami`
