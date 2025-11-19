
# Install Instructions (ROS2 Jazzy)

This install process follows the instruction on [docs.ros.org](https://docs.ros.org/en/jazzy/Installation.html)

In `bin` directory, severals scripts allow for automatic installs :

- [install-ros] : Minimal configuration and install of ros.
- [install-station] : To install a classic Mobi-Syst develloper configuration.

## Install in short

```sh
# Prepare for ROS2 :
sudo apt install -y curl software-properties-common
sudo add-apt-repository universe -y

# Configure apt :
export ROS_APT_SOURCE_VERSION=$(curl -s https://api.github.com/repos/ros-infrastructure/ros-apt-source/releases/latest | grep -F "tag_name" | awk -F\" '{print $4}')
curl -L -o /tmp/ros2-apt-source.deb "https://github.com/ros-infrastructure/ros-apt-source/releases/download/${ROS_APT_SOURCE_VERSION}/ros2-apt-source_${ROS_APT_SOURCE_VERSION}.$(. /etc/os-release && echo ${UBUNTU_CODENAME:-${VERSION_CODENAME}})_all.deb"
sudo dpkg -i /tmp/ros2-apt-source.deb

# A final tool:
sudo apt update
sudo apt install -y ros-dev-tools
```

Then install (use one of the options): 

```sh
sudo apt install -y ros-jazzy-ros-base # for minimal install
sudo apt install -y ros-jazzy-desktop  # for developers install (include visualtization etc.)
sudo apt install -y ros-jazzy-desktop-full # for not missing anything
```

## Configure your environment

```sh
sudo usermod -a -G dialout `whoami`
```

You can setup your terminal with ROS2 environment: 

```sh
source /opt/ros/iron/setup.bash
```

## Hello-World with ROS2

This workspace include a default simple ROS package `draft-mb6` into `pkg-draft` directory.
You can build it with `colcon build`,
then, inform your environment of the existance of new ROS resources `source ./install/setup.bash`.

In fact, the `run-commands.bash` would also do the job (`source ./install/setup.bash`).
You can make your own `run-commands.bash` and automitically source this on your terminal...

```sh
echo "

# mb6 ROS environment:
source ~/mb6-space/bin/run-commands.bash" >> ~/.bashrc
```

(optional) you can add a `domain-id` to allow several ROS2 virtual networks to work on a same phisical network ([doc](https://docs.ros.org/en/humble/Concepts/About-Domain-ID.html))

```
export ROS_DOMAIN_ID=42
```

Push the `source` and `export` commands on your bashrc file.

Finally launch a talker and a listerner in two terminals `ros2 run draft_mb6 py_listerner` and `ros2 run draft_mb6 cpp_talker`.

For going further follow the draft tutorirals:

- [ROS2 introduction](./docs/tuto-ros2-intro.md)
- [package create](./docs/tuto-draft-pkg.md)
- [python node](./docs/tuto-draft-python.md)
- [cpp node](./docs/tuto-draft-cpp.md)


**Hokuyo Laser Range** 

Just use the `urg_node` form the ROS `urg_node` package.
It requires that the linux user is in dialout group.

```sh
sudo apt install -y ros-iron-urg-node
sudo usermod -a -G dialout `whoami`
```

**RealSense**

Use the `vcpkg` tool as [recommended](https://github.com/IntelRealSense/librealsense).

```sh
cd 
git clone https://github.com/Microsoft/vcpkg.git .vcpkg
~/.vcpkg/bootstrap-vcpkg.sh
~/.vcpkg/vcpkg install realsense2
pip install pyrealsense2
```

You can connect the camera and test with `./bin/test-realsense-cam.py` script.

**Gazebo Simulation**

ROS compliant version of gazebo can be installed from `ros-iron-gazebo-xxx` packeges.
The [install-gazebo](./bin/install-gazebo) script provide the list of usefull packages.

More on Gazebo-Ros: [docs.ros.org](https://docs.ros.org/en/iron/Tutorials/Advanced/Simulators/Gazebo/Simulation-Gazebo.html)

The IMT-MobiSyst simulated Robot is configured on a specific repo: `git clone https://github.com/imt-mobisyst/pkg-tsim`

```sh
source ./bin/run-commands.bash
./bin/install-gazebo
git clone https://github.com/imt-mobisyst/pkg-tsim
colcon build
```

**Cuda**

## IMT-Mobisyst packages

Your _mb6-space_ workspace is now ready to welcome robotic packages.
Depending of your need, you can install and build the relevant mb6's packages...
