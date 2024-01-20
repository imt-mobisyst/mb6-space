#!/usr/bin/env bash

# Return in mb6-space.
cd `dirname $0`/..

# Apply patches:
if [ ! -e ./patches ]; then
    mkdir patches
fi

# Patch 000
export PATCH= "patch000"
if [ ! -f ./patches/$PATCH.log ]; then
    # Do something
    # ...
    # Mark the patch
    echo "-> Patch process ready" > ./patches/$PATCH.log
    cat ./patches/$PATCH.log
fi
