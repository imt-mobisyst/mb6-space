# OS Instalation on Pi3 

Version Rasbery-Pi3 with Ubuntu 22.04.

Need Raspberry *Pi-Imager* from [www.raspberrypi.com](https://www.raspberrypi.com/software) (not from apt...).

## Ubuntu via imager:

1. Select our os `other general-purpose OS > Ubuntu 22.04 (SERVER 64-BIT)`
2. Select the SD-Card to overwrite
3. set parameters (Advanced Options:)
  - choose a pibot number _XX_ between 20 and 80.
  - hostname: 'pibotXX'
  - enable SSH (password auth)
  - username: bot 
  - password: bot
  - LAN:
    * _IoT IMT Nord Europe_ : `72Hin@R*`

Try **Custom Image**: Section: _Modify existing image_ on https://opensource.com/article/21/7/custom-raspberry-pi-image

## Install:

You can process a classical install from [install-pi3](../bin/install-pi3) script or go on **Manual Install** section. 
Attention, the script also install ROS in _ros-base_ configuration and mb6 elements.

```sh
cd
git clone https://bitbucket.org/imt-mobisyst/mb6-space
cd mb6-space
./bin/install-pi3
```

## Manual Install:

If necessary, update ntp serveurs conf and restart timesyncd service:

```sh
date
sudo nano /etc/systemd/timesyncd.comf
sudo service systemd-timesyncd restart
```

You can set: `NTP=0.fr.pool.ntp.org 1.fr.pool.ntp.org 2.fr.pool.ntp.org 3.fr.pool.ntp.org`

Or fix manually the date:

```sh
date
sudo date -s "2022-05-14 15:42:30"
sudo apt update
```

Clone `mb6-space`:

```sh
cd
git config --global http.sslverify false
git clone https://bitbucket.org/imt-mobisyst/mb6-space.git
```

Update and get some soft: 

First configure `apt` needrestart from "interactive" (that promt an interactive windows to specify which services to resart after an apt update) to "automatic".
Edit the `/etc/needrestart/needrestart.conf` file, to change the line `#$nrconf{restart} = 'i';` to  `$nrconf{restart} = 'a';`.

```sh
## OR:
sudo cp deps/install-pi3-needrestart.conf /etc/needrestart/needrestart.conf
```
You can now use `apt` in a more silent and autonomous mode...

```sh
sudo apt update
sudo apt remove cloud-init
sudo apt install -y build-essential meld
sudo apt upgrade -y
```

### DHCP Server on Eth0:

The idea is to permit a direct connexion between a Suppervision-machine and the tbot-machin.
First set up a static configuration on your PI:
Set static `eth0` configuration, in  `/etc/netplan/`.

```sh
sudo nano /etc/netplan/60-static-eth0.yaml
```

```yaml
# Static Configuration
network:
    ethernets:
        eth0:
            dhcp4: no
            addresses:
             - 10.10.1.1/16
    version: 2
```

```sh
## OR:
sudo cp deps/install-pi3-60-static-eth0.yaml /etc/netplan/60-static-eth0.yam
```

sudo netplan apply

sudo cp deps/install-pi3-dhcpd.conf /etc/dhcp/dhcpd.conf``)

```sh
sudo netplan apply
```

Then inatll and configure `isc-dhcp-server` (To notice this server is deprecied from 2022)

```sh
sudo apt install isc-dhcp-server
```

Edit: `/etc/dhcp/dhcpd.conf` like:

```conf
# This is a very basic subnet declaration.

subnet 10.10.0.0 netmask 255.255.0.0 {
  range 10.10.1.20 10.10.1.80; 
  option domain-name-servers 8.8.8.8, 8.8.4.4; 
  option routers 10.10.1.1; 
}
```

Set `eth0` on `/etc/default/isc-dhcp-server` Interfaces v4.

```sh
## OR:
sudo cp deps/install-pi3-dhcpd.conf /etc/dhcp/dhcpd.conf
sudo cp deps/install-pi3-dhcp-server /etc/default/isc-dhcp-server
```

```sh
sudo service isc-dhcp-server restart
```

NotaBene: ethernet need to be connected at starttime (or isc-dhcp-server restarted)...

**To debug:**

```sh
systemctl status isc-dhcp-server.service # get the PID
journalctl _PID=2690
```

The pibot is reachable in direct ethernet connexion (10.10.1.1 or pibotXX.local). 

### Wifi 

To add Wifi

```sh
nano /etc/netplan/50-cloud-init.yaml
```

### robotic workspace:

You can return on [README.md](../README.md) for more detail on ROS2 install.
The script `bin/install-ros-setup` configure ubuntu for ROS installation.

Then pibot relies on `ros-base` and `urg-node`.

```sh
bin/install-ros-setup

export ROSDISTRO=iron
sudo apt install -y \
  ros-$ROSDISTRO-ros-base \
  ros-$ROSDISTRO-urg-node

sudo usermod -a -G dialout `whoami`
```

Your good to build mb6-space:

```sh
source /opt/ros/iron/setup.bash
colcon build
```

### Some specifics elements for Pi3:

- The specific _run-commands_ to source is `./bin/pibot-run-commands.bash`. It permits to set a specific ROS domain to the _pibot_. 

Edit `~/.bashrc`, and add: 

```sh

# mb6 ROS environment:
source ~/mb6-space/bin/pibot-run-commands.bash
```

## Current use of pibot:

###  Configuration for turtlebot:

Install `pkg-tbot` to get turtlebot drivers.

### system control

Service creation: [on linuxhandbook](https://linuxhandbook.com/create-systemd-services/)

```sh
sudo cp ./resource/pibot.service /etc/systemd/system/
```

