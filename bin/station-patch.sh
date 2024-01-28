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

# Patch 003
PATCH="patch003"
if [ ! -f ./patches/$PATCH.log ]; then
    # Do something
    cp -f deps/station-config-ros.bash ./config-ros.bash
    colcon build
    # Mark the patch
    echo "-> Fix subnet on 99 for Bot" > ./patches/$PATCH.log
    cat ./patches/$PATCH.log
fi

# Patch 004
PATCH="patch004"
if [ ! -f ./patches/$PATCH.log ]; then
    # Do something
    bin/set-parasit-as-a-service
    sudo systemctl disable mb6-update
    # Mark the patch
    echo "-> Fix subnet on 99 for Bot" > ./patches/$PATCH.log
    cat ./patches/$PATCH.log
fi
