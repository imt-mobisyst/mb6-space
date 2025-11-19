# MobiSyst ROS2 Workspace - Documentation

Curent version: **Ubuntu-24.04 LTS** / **ROS2 jazzy**

_mb6-space_ regroups elements for playing with the mobile robots of IMT Nord Europe.
It is the master project on the top off sub-projects, dedicated to robots platform, software modules or scenario applications.

It does not include code but mostly documentation and command tools.


## Install

You have first to clone the mb6-space repo...

```sh
git clone https://github.com/imt-mobisyst/mb6-space.git
cd mb6-space
```

Then, you will mainlly need **ROS2**.
You can rely on [install section](./install.md) to get specific instruction depending on the targeted machine.
However the following scripts provide shortcuts.




On a _x86_ machine you also can get help from the communty: [official website](https://ubuntu.com/) - [french community](https://www.ubuntu-fr.org/)

Some install script for classical install:

- [install-ros](./bin/install-ros) - setup `apt` to target offical ROS repo and install ros minimal elements
- [install-gazebo](./bin/install-gazebo) - install ROS-Gazebo
- [install-realsense](./bin/install-realsense) - install dev. environement: RealSense

Otherwize, you can go through the manual instructions or execute the appropriate install scrips in [bin](./bin) directory:



```sh
pip install toml toml-cli
./bin/set-mb6-bashrc
source ./bin/run-commands.bash
```



## Get started.

`ROS2` works with several environement variables. 
You can change the variables easily by editing your `./config.toml` and source again the `./bin/run-commands.bash`.

```sh
gedit ./config.toml
sources ./bin/run-commands.bash
```

One simple example for ros package to install is `pkg-basic` defining basic functionalities.
To notice that most of our packages come with an install script for dependencies.

so:

```sh
git clone https://github.com/imt-mobisyst/pkg-basic.git
./pkg-basic/bin/install
colcon build
sources ./bin/run-commands.bash
ros2 launch basic_node parasit_launch.yaml
```

The same install instructions can be applied to most of the MobiSyst ROS2 packages.

