#!/usr/bin/env bash

# Return in mb6-space.
cd `dirname $0`/..

# Apply patches:
if [ ! -e ./patches ]; then
    mkdir patches
fi

# Patch 000
PATCH="patch000"
if [ ! -f ./patches/$PATCH.log ]; then
    # Do something
    # ...
    # Mark the patch
    echo "-> Patch process ready" > ./patches/$PATCH.log
    cat ./patches/$PATCH.log
fi

# Patch 005
PATCH="patch005"
if [ ! -f ./patches/$PATCH.log ]; then
    # Do something
    sudo apt install ntpdate
    bin/set-parasit-as-a-service
    sudo systemctl disable mb6-update
    cp ./deps/install-sudoers /etc/sudoers
    # Mark the patch
    echo "-> Clean PC Stations..." > ./patches/$PATCH.log
    cat ./patches/$PATCH.log
fi
