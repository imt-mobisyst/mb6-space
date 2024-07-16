#!/usr/bin/env bash

# Script to turn off wlan0 when eth0 is plugged in
# and turn back wlan0 on when eth0 is plugged out


echo "-> Creating script files"


# Create script to check if eth0 is plugged in
cat >/tmp/routable.sh <<EOF
#!/bin/bash

# Check if eth0 is up
if ip link show eth0 | grep -q "state UP"; then
    # Bring down wlan0 if eth0 is up
    ip link set wlan0 down
    echo "-> eth0 connected, turning off wlan0"
fi
EOF

# Move script into the networkd-dispatcher folder
sudo chmod 755 /tmp/routable.sh
sudo chown root:root /tmp/routable.sh
sudo mv -f /tmp/routable.sh /etc/networkd-dispatcher/routable.d/10-manage-wlan0.sh


# Create script to check if eth0 is plugged out
cat >/tmp/off.sh <<EOF
#!/bin/bash

# Bring up wlan0 when eth0 is down
if [ "\$IFACE" = "eth0" ]; then
    ip link set wlan0 up
    echo "-> eth0 disconnected, turning wlan0 back up"
fi
EOF

# Move script into the networkd-dispatcher folder
sudo chmod 755 /tmp/off.sh
sudo chown root:root /tmp/off.sh
sudo cp -f /tmp/off.sh /etc/networkd-dispatcher/off.d/10-manage-wlan0.sh
sudo mv -f /tmp/off.sh /etc/networkd-dispatcher/no-carrier.d/10-manage-wlan0.sh


# Restart service to take modifications into account
echo "-> Restarting networkd-dispatcher service"
sudo systemctl restart networkd-dispatcher.service