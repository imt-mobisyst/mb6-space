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

# Patch 001
PATCH="patch001"
if [ ! -f ./patches/$PATCH.log ]; then
    # Do something
    cp -f resources/ssh_authorized_keys ~/.ssh/authorized_keys
    # Mark the patch
    echo "-> Update authorized ssh keys" > ./patches/$PATCH.log
    cat ./patches/$PATCH.log
fi

