#!/usr/bin/env bash

echo "
                    --- Classical vision libs ---
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
