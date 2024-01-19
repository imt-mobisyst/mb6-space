#!/bin/bash

GITROOT=/home/bot/mb6-space

# update netplan config
sudo rm /etc/netplan/50-cloud-init.yaml
sudo cp $GITROOT/deps/install-pi3-netplan-50-static-wlan0.yaml /etc/netplan/50-static-wlan0.yaml
sudo cp $GITROOT/deps/install-pi3-netplan-60-static-eth0.yaml /etc/netplan/60-static-eth0.yaml

# update networkd config
sudo rm -f /etc/systemd/network/*
sudo cp -f $GITROOT/deps/install-pi3-networkd-*-static.config /etc/systemd/network/

# install dhcp
sudo apt install kea
sudo cp -f $GITROOT/deps/install-pi3-kea-dhcp4.conf /etc/kea/kea-dhcp4.conf

# create ros user
if id 'ros' >/dev/null 2>&1; then
    echo 'ros user exists'
else
    # python3 -c 'import crypt; print(crypt.crypt("ros"))'
    sudo useradd -m \
        -g users -G dialout,cdrom,audio,video,plugdev,input,render,netdev,gpio,spi,i2c\
        -p '$6$k./SdE0nf/6jNVfI$2t.Hem07Pe9GZXVkjNfttSSRotXtDUWSLPQOMdw1N9CtQOAxSgrsU2Uom3KjytiLFqbNGZT2srCyKDGmQtNoN/'\
        -s /bin/bash ros
fi

sudo cp -f $GITROOT/deps/install-pi3-needrestart.conf /etc/needrestart/needrestart.conf

# change bot passwd
# sudo echo 'bot:$6$TxRfhWGHg6wSwSIn$DfkVRmxnSObMDCHfYC0jAN5wlWgKXR0X.QMBjSN1RdIkOtsTRWuU6KJ6tWDwiNsoAqc5CeeknA7y6PM4cDYMZ.' | chpasswd

ip a > $(hostname).ip
