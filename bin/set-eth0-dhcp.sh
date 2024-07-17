#!/usr/bin/env bash

# Script to install and set a DHCP server for the eth0 interface as a service
 

echo "-> Disabling resolved" # because we will replace it with dnsmasq

# Save default config if not already done
FILE=/etc/systemd/resolved.conf.default
if [ ! -f "$FILE" ]; then
    sudo mv -f /etc/systemd/resolved.conf "$FILE"
fi

# Create new config
echo """
[Resolve]
DNSStubListener=no
""" > resolved.conf
sudo mv -f resolved.conf /etc/systemd/resolved.conf

# Restart service
sudo systemctl restart systemd-resolved.service




# -----------------------------------------------------------------------------------

echo "-> Installing dnsmasq (DCHP Server)"
sudo apt install -y dnsmasq




# -----------------------------------------------------------------------------------

echo "-> Set DHCP configuration"

# Save default config if not already done
FILE=/etc/dnsmasq.conf.default
if [ ! -f "$FILE" ]; then
    sudo mv -f /etc/dnsmasq.conf "$FILE"
fi

# Create new config
echo """
# DHCP server config
interface=eth0
dhcp-range=192.168.1.10,192.168.1.100,255.255.255.0,365d
""" >  dnsmasq.conf
sudo mv -f dnsmasq.conf /etc/dnsmasq.conf



# -----------------------------------------------------------------------------------
echo "-------------------------------------------------------------"
echo "=> Done. RESTART the RPI for changes to be taken into account"