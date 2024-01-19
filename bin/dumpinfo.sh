#!/bin/bash

CURRENT_PATH=`dirname $0`

ip a > $CURRENT_PATH/$(hostname).log
