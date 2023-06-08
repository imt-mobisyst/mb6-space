# Instalation de l'OS pour Pi3 

Version Rasbery-Pi3 with Ubuntu 20.04. (idéal pour une cohabitation ROS/ROS2)

Requiére Raspberry *Pi-Imager* 

```bash
sudo apt install rpi-imager 
rpi-imager
```

## Ubuntu via l'imager:

(cf. section **Ubuntu manuel** pour une alternative _'par les fichiers'_)

Preparer une Pi from scratch:

Dans imager: 

1. sélectionner une image Ubuntu Server 20.04 lts 64bit (other general-purpose OS).
2. selectionner la carte SD
3. dans paramétres: 
    - hostname: **pibot00.local**
    - enable SSH with password auth.
    - set username/passord: bot/bot 
    - set lan: Pirate-INE/pine0kio
4. ecrire la carte SD

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
