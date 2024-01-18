
# static ip eth0 systemd-networkd

```
root@pibot22:$ sudo vim /etc/systemd/network/eth0-config.network
[Match]
Name=enxb827ebd3b57c

[Link]
Name=eth0

[Network]
Address=192.168.1.1/24
Gateway=192.168.1.1
DNS=192.168.1.1
```

```
systemctl restart systemd-networkd
```

```
networkctl list
networkctl status
```

# Netplan static ip eth0

```
bot@pibot22:discovery(SUBNET),domain(22):~
$ cat /etc/netplan/50-cloud-init.yaml
# This file is generated from information provided by the datasource.  Changes
# to it will not persist across an instance reboot.  To disable cloud-init's
# network configuration capabilities, write a file
# /etc/cloud/cloud.cfg.d/99-disable-network-config.cfg with the following:
# network: {config: disabled}
network:
    version: 2
    wifis:
        renderer: networkd
        wlan0:
            access-points:
                IoT IMT Nord Europe:
                    password: c454079ec3ae4199b6bb654c299fa08a87c0923657e911a0c9be552e282a07eb
            dhcp4: true
            optional: true
    ethernets:
      renderer: networkd
      eth0:
        addresses:
          - 192.168.1.1/24


# DHCP server Kea

```
sudo apt install kea
```

```
root@pibot22:/etc/kea# cat kea-dhcp4.conf
{
# DHCPv4 configuration starts on the next line
"Dhcp4": {

# First we set up global values
    "valid-lifetime": 4000,
    "renew-timer": 1000,
    "rebind-timer": 2000,

# Next we set up the interfaces to be used by the server.
    "interfaces-config": {
        "interfaces": [ "eth0" ]
    },

# And we specify the type of lease database
    "lease-database": {
        "type": "memfile",
        "persist": true,
        "name": "/tmp/kea-leases4.csv",
        "lfc-interval": 1800,
        "max-row-errors": 100
    },

# Finally, we list the subnets from which we will be leasing addresses.
    "subnet4": [
        {
            "subnet": "192.168.1.0/24",
            "pools": [
                {
                     "pool": "192.168.1.50 - 192.168.1.200"
                }
            ]
        }
    ]
# DHCPv4 configuration ends with the next line
}

}
```