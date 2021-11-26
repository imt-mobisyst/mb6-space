# Mobile System - Ring

The project to control all the others...

Ring regroups elements for playing with the mobile robots of IMT Nord. Its is the master project on the top off sub-project dedicated to robots platform, software modul or scenario application.

Curent version for **Ubuntu-20.04 LTS** / **ROS noetic**

## Install

### The machine

Configure the computer to have an homogene confs...

Install **Ubuntu-20.04 LTS** or derivate (**POP!_OS**) with *bot* user (password *bot*)

Change machine name (cf. Robot Names section)

```bash
sudo nano /etc/hostname
```

Grant _bot_ with some access: 

```bash
sudo usermod -a -G dialout bot 
```

Configure Wifi:

**fleury** wifi, password: _72Hin@R*_

optional: **robot** wifi:

- password: robotsdesmines
- ip : 10.1.16.XX, 20 < xx < 255
- mask: 255.255.0.0
- Passerel: 10.1.1.1, 
- DNS 10.1.2.110,10.1.2.111

Update the machine:

```bash
sudo apt update
sudo apt upgrade
sudo apt autoremove
```

### Classical tools

```bash
sudo apt -y install git ssh sshfs curl code build-essential
```

Initialize git:

```bash
git config --global user.email "imt-mobisyst@drods.net"
git config --global user.name bot@`hostname`
```

### ROS

Follow the instruction on [wiki.ros.org](https://wiki.ros.org)

- [Installation procedure](https://wiki.ros.org/noetic/Installation/Ubuntu)

In short: 

```bash
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
sudo apt install -y ros-noetic-desktop
echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
source ~/.bashrc
sudo apt install -y python3-rosdep python3-rosinstall \
python3-rosinstall-generator python3-wstool
sudo rosdep init
rosdep update
```

### RealSense

Install RealSense drivers:
 * [github readme file](https://github.com/IntelRealSense/librealsense)
 * [Linux instruction](https://github.com/IntelRealSense/librealsense/blob/master/doc/distribution_linux.md)


## MobiSyst sub-module: 


## Robot names

[List of fictional robots and androids](https://en.wikipedia.org/wiki/List_of_fictional_robots_and_androids)
[List of fictional AI](https://en.wikipedia.org/wiki/List_of_fictional_robots_and_androids)

computer                 | hostname    | MAC | robot ip
-------------------------|-------------|-----|-----
hp guillaume (40832)     | Marvin      |  | 41
ldlc(1)				     | T-Bob       |  | 45
ldlc(2)				     | Astro       |  | 46
ldlc(3)				     | BB-8        |  | 47
HP EliteBook 850 (38973) | K2000       |  | 57
HP EliteBook 850 (38975) | Wall-E      |  | 44
HP Spectre			     | nono        |  | 43
Toshiba Satellite		 | David       |  | 49
Toshiba Satellite		 | Baymax      |  | 50
Asus				     | TARS        |  | 62
dell 13''		         | deepthought |  | 42
Freight100		         | freight100  |  | 68
dell 13''		         | baymax      | 4c:1d:96:49:28:84 | 50
