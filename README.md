# Mobile System - Master for Robotics Packages

The project to control all the others...

_mb6-space_ regroups elements for playing with the mobile robots of IMT Nord Europe.
Its is the master project on the top off sub-project dedicated to robots platform, software modules or scenario application.

It does not include code but mostly documentation and tools.

Curent version: **Ubuntu-22.04 LTS** / **ROS2 iron**

## Install

_mb6-space_ is a meta-package.
It didn't require to be installed, just, clone me sommewhere, potentially as your ros-workspace.
For an installation of ROS and everithing, refert to the robots you want to play with.

```sh
git clone https://bitbucket.org/imt-mobisyst/mb6-space
cd mb6-space
```

### Ubuntu-22.04 LTS

First install the OS on your machine: 

- On a _Raspberry Pi_ you can follows the guides: [Ubuntu22.04 on the Pi3](./docs/configure-pi3.md)
- On a _x86_ machine get help from the communty: [official website](https://ubuntu.com/) - [french community](https://www.ubuntu-fr.org/)

You can go through the manual instructions or execute the appropriate install scrips:

- `bin/initialize-pi3.sh` - for a fresh pibot version of Ubuntu Server 22.04.
- `bin/initialize-station.sh` - for a fresh desktop Ubuntu 22.04 for PC Station.
- `bin/initialize-ros.sh` - install ROS iron from the official repo.
- `bin/initialize-extra.sh` - install classical modules: RealSense, Hokuyo-LaserRange

### ROS2 Installation

Follow the instruction on [docs.ros.org](https://docs.ros.org/en/iron/Installation/Ubuntu-Install-Debians.html)

In short:

```sh
sudo apt install -y curl software-properties-common
sudo add-apt-repository universe -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

sudo apt update
sudo apt install -y ros-dev-tools
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

### Hello-World with ROS2

Follow the instruction form the officail documentations: [docs.ros.org](https://docs.ros.org).
You also find a lot of valuable information on the ROS1 wiki: [wiki.ros.org](https://wiki.ros.org) (typically the definition of the mesages).

you can build your first package: (we prefer cmake methode for both C++ and [python](https://docs.ros.org/en/rolling/How-To-Guides/Ament-CMake-Python-Documentation.html) packages)

```sh
ros2 pkg create --build-type ament_cmake_python draft
colcon build --packages-select my_package
source ./install/setup.bash
```


### Modules:

**Hokuyo Laser Range**

**RealSense**

**Cuda**



### The robots

The robot bases and modules are ros packages to install and built them: 

```sh
```

**Bases:**

- The **TurtleBots**
    * Package: [pkg-tbot](https://bitbucket.org/imt-mobisyst/pkg-tbot) (howevers, the packages are installed and configured on onboard Pi3 computer)
    * Connect the Pi3 with an ethernet cable, the robot IP is `10.10.1.1` (`ssh bot@10.10.1.1`).
- **AlpagaDrone** Refers to `mb6-playload/alpaga/` repositoty 
- **fetch**: 
- **drone playload**: 

**Moduls:**

- : [mb6-tbot](https://bitbucket.org/imt-mobisyst/mb6-tbot)