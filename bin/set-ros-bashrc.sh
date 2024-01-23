#!/bin/bash

sudo echo """

export ROS_AUTOMATIC_DISCOVERY_RANGE='LOCALHOST'
export ROS_DOMAIN_ID='00'
PS1='\${debian_chroot:+(\$debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:(\$ROS_AUTOMATIC_DISCOVERY_RANGE::\$ROS_DOMAIN_ID)\[\033[01;34m\]\w\[\033[00m\].\n\$ '
""" >> /home/ros/.bashrc

