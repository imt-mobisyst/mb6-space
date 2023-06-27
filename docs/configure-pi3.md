# OS Instalation on Pi3 

Version Rasbery-Pi3 with Ubuntu 22.04.

Need Raspberry *Pi-Imager* 

```sh
sudo apt install rpi-imager
rpi-imager
```

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
    * _Fleury_ : `72Hin@R*` 
    * (in my dream) _IOT-IMT-Nord-Europe_ : `pass4Iot-Imt`

## First login:

If necessary, fix manually the date:

```sh
date
sudo date -s "2022-05-14 15:42:30"
```

Then you can process a classical install from [install-pi3](../bin/install-pi3.sh) script or go on **Manual Install** section. 
Attention, the script also install ROS in _ros-base_ configuration.

```sh
cd
curl https://bitbucket.org/imt-mobisyst/mb6-space/raw/master/bin/install-pi3.sh > install.sh
bash install.sh
rm install.sh
```


## Manual Install:

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
sudo apt upgrade -y
sudo apt install -y build-essential meld
```

### DHCP Server on Eth0:

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
nano /etc/netplan/40-wifi.yaml
```

### robotic workspace:

You can return on [README.md](../README.md) to process regular install of the software.
Don't forget to install `pkg-tbot` to get turtlebot drivers.



