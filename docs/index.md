# MobiSyst ROS Packages Documentation

Curent version: **Ubuntu-22.install04 LTS** / **ROS2 iron**


## Install

You can rely on install section in the navigation bar to get specific instruction depending on the targeted machine.

On a _x86_ machine you also can get help from the communty: [official website](https://ubuntu.com/) - [french community](https://www.ubuntu-fr.org/)

### ROS2 dev. environment-22.04 LTS

Some install script for classical install:

- [install-ros-setup](./bin/install-ros-setup) - only setup `apt` to target offical ROS repo.
- [install-ros](./bin/install-ros) - install ROS iron from the official repo in desktop mode.
- [install-gazebo](./bin/install-gazebo) - install ROS-Gazebo
- [install-realsense](./bin/install-realsense) - install dev. environement: RealSense

Otherwize, you can go through the manual instructions or execute the appropriate install scrips in [bin](./bin) directory:


### Manual Installation

```sh
git clone https://bitbucket.org/imt-mobisyst/mb6-space
cd mb6-space
```

This install process follows the instruction on [docs.ros.org](https://docs.ros.org/en/iron/Installation/Ubuntu-Install-Debians.html)

In short :

```sh
sudo apt install -y curl software-properties-common
sudo add-apt-repository universe -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

sudo apt update
sudo apt install -y ros-dev-tools # ament-cmake-python
```

Then install (use one of the options): 

```sh
sudo apt install -y ros-iron-ros-base # for minimal install
sudo apt install -y ros-iron-desktop # for developers install (include visualtization etc.)
sudo apt install -y ros-iron-desktop-full # for not missing anything
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

The IMT-MobiSyst simulated Robot is configured on a specific repo: `git clone https://bitbucket.org/imt-mobisyst/pkg-tsim`

```sh
source ./bin/run-commands.bash
./bin/install-gazebo
git clone https://bitbucket.org/imt-mobisyst/pkg-tsim
colcon build
```

**Cuda**


## IMT-Mobisyst packages

Your _mb6-space_ workspace is now ready to welcome robotic packages.
Depending of your need, you can install and build the relevant mb6's packages...

### Robots
functions
The robot bases and modules relies on ros packages to install and built them: 

```sh
cd ~/mb6-space
git clone git@bitbucket.org:imt-mobisyst/pkg-NAME
pkg-NAME/bin/install
colcon build
```

- **TurtleBots** : Package [pkg-tbot](https://bitbucket.org/imt-mobisyst/pkg-tbot) (howevers, the packages are installed and configured on onboard Pi3 computer)
- **Robulab** : Package [pkg-robulab](https://bitbucket.org/imt-mobisyst/robulab) 
- **AlpagaDrone** Refers to `mb6-playload/alpaga/` repositoty
- **fetch**: 
- **drone playload**: 


### Modules:

The robot bases and modules relies on ros packages to install and built them: 

```sh
cd ~/mb6-space
git clone git@bitbucket.org:imt-mobisyst/pkg-NAME
pkg-NAME/bin/install
colcon build
```

- [pkg-toons](https://bitbucket.org/imt-mobisyst/pkg-toons) **To**p**o**logical **N**avigation and **S**LAM regroups ROS2 packages that includes usefull elements for topological control of a mobile robot.
- [pkg-viscene](https://bitbucket.org/imt-mobisyst/pkg-viscene) **Vi**sion based **Scene** regnition.
