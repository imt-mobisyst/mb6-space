#!env bash

## Clone  mb6-space

cd
if [ ! -d "mb6-space" ]; then
  git config --global http.sslverify false
  git clone https://bitbucket.org/imt-mobisyst/mb6-space.git
fi
cd mb6-space

## Some Softs:

sudo apt update
sudo apt upgrade -y
sudo apt install -y build-essential meld isc-dhcp-server

### DHCP Server on Eth0:

sudo cp dep/install-pi3-60-static-eth0.yaml /etc/netplan/60-static-eth0.yaml
sudo netplan apply

sudo cp dep/install-pi3-dhcpd.conf /etc/dhcp/dhcpd.conf
sudo cp dep/install-pi3-isc-dhcp-server /etc/default/isc-dhcp-server
sudo service isc-dhcp-server restart

### install ROS2 :

../bin/install-ros.sh
