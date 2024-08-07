# Setup ROS command environment:
if [ -e /opt/ros/iron/setup.bash ]; then
  source /opt/ros/iron/setup.bash
  export ROS_WORKSPACE="iron"
fi
if [ -e ~/mb6-space/install/setup.bash ]; then
  source ~/mb6-space/install/setup.bash
  export ROS_WORKSPACE="mb6-space"
fi

# some Git alias:
alias status='git status -sb .'
alias log='git log -n 4'
alias log-all='git log --all --decorate --oneline --graph'
alias diff='git difftool -t meld'

# some other alias:
alias mb6-build-pkg='colcon build --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON --packages-select'

# Tunned prompt:
PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:($ROS_AUTOMATIC_DISCOVERY_RANGE::$ROS_DOMAIN_ID)\[\033[01;34m\]\w\[\033[00m\].\n\$ '

# Pibot configurations:
export ROS_DOMAIN_ID=`~/mb6-space/bin/pibot-number`

# Go message:
echo "
  ---  `hostname`:$ROS_WORKSPACE ready on ROS domain: $ROS_DOMAIN_ID  ---
"
