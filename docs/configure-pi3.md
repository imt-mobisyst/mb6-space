# OS Instalation on Pi3 

Version Rasbery-Pi3 with Ubuntu 22.04.

Need Raspberry *Pi-Imager* 

```bash
sudo apt install rpi-imager 
rpi-imager
```

## Ubuntu via imager:

1. Select our os `other general-purpose OS > Ubuntu 22.04 (SERVER 64-BIT)`
2. Select the SD-Card to overwrite
3. set parameters (Advanced Options:)
  - hostname: 'pibotXX' (XX: not attributed SD-Card number from 20 to 80)
  - enable SSH (password auth)
  - username: bot 
  - password: bot
  - LAN: IOT-IMT-Nord-Europe pass4Iot-Imt

## First login: 

Do some updates:
```sh
sudo apt update
sudo apt upgrade
```

## Setup a DHCP Server on Eth0:

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
sudo service isc-dhcp-server restart
```

NotaBene: ethernet need to be connected at starttime...

**To debug:**

```sh
systemctl status isc-dhcp-server.service # get the PID
journalctl _PID=2690
```

The pibot is reachable in direct ethernet connexion (10.10.1.1 or pibotXX.local). 


### Wifi 

nano /etc/netplan/40-wifi.yaml



### Todo

- Creuser Cloud-Init...

## Premiere connection log (bot:bot):

```sh
sudo su
timedatectl
timedatectl set-timezone Europe/Paris
timedatectl set-time "2022-07-07 12:00:30"
timedatectl
apt update
apt upgarde
apt install git curl sshfs build-essential
apt install avahi-deamon # for .local
```

Il est normalement possible ensuite de se logger par le réseaux: 

```sh
ssh bot@pibot00.local
```

## Few manual config

For some strange resons the .local is activated only after a ping from the Pi to the Pi...

```sh
ping -c 3 pibot00.local 
```

```sh
# Manually set date
sudo date -s "05/05/2022 15:42:30"
# or:
timedatectl set-time "2022-05-05 15:42:30"

# List wifi connections
# should be connected to pirateINE
sudo wpa_cli -i wlan0 list_networks

# change wifi connection
sudo wpa_cli -i wlan0 select_network network_id
```

## Instalation de ROS (1 and 2)

### ROS1

Then ROS (base version): [doc](http://wiki.ros.org/noetic/Installation/Ubuntu)

```sh
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
sudo apt update
sudo apt install -y ros-noetic-ros-base
echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
source ~/.bashrc
sudo apt install -y python3-rosdep python3-rosinstall python3-rosinstall-generator python3-wstool build-essential
sudo rosdep init
rosdep update
```

### ROS2

And ROS2 [doc](https://docs.ros.org/en/foxy/Installation.html)

Prepare: 

```sh
sudo apt update
sudo apt install -y curl gnupg2 lsb-release
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key \
 -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(source /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```

Install # ROS2 (foxy): 

```sh
sudo apt update
sudo apt install -y ros-foxy-ros-base ros-foxy-demo-nodes-py ros-foxy-ros1-bridge
echo "source /opt/ros/foxy/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

**But its seems no possible to have ROS1 and ROS2 in a same shell...**

Test : (into 2 terminals)

```sh
ros2 run demo_nodes_py talker
ros2 run demo_nodes_py listener
```

### bridge (ROS1-ROS2)

(suppose linstallation du packet `ros-foxy-ros1-bridge` cf. section **ROS2**)

Test bridge ([README](https://github.com/ros2/ros1_bridge)):

```sh
#shell A
source /opt/ros/noetic/setup.bash
roscore &
rosrun rospy_tutorials talker
#shell B
ros2 run ros1_bridge dynamic_bridge
#shell C
ros2 run demo_nodes_py listener
```

à noter, le `dynamic_bridge` porte bien son nom, le topic ROS1 apparait en ROS2 uniquement quant deux noeuds de pert et d'autre échangent des infos par le topic en question.


## Aleternative - Ubuntu manuel

Sauté si vous avais suivi la secion **Avec Imager**

Preparer une Pi from scratch:

Dans imager: 

1. sélectionner une image Ubuntu Server 20.04 lts 64bit (other general-purpose OS).
2. selectionner la carte SD
4. ecrire la carte SD

Configure the network (in `network-config` file)

```
wifis:
  wlan0:
    dhcp4: true
    optional: true
    access-points:
      "Pirate-INE":
        password: "pine0kio"
```

At first log (ubuntu:ubuntu):

```sh
echo 'pibot00' > /etc/hostname       
adduser bot              # with bot password
usermod -a -G sudo bot
usermod -a -G dialout bot
sudo shutdown -r now
```

Then:

```sh
sudo userdel -r ubuntu
```

Or... Set the user name and the hostname in user-data file 

```
chpasswd:
  expire: false
  list:
  - bot:bot

hostname: pibot01
```
