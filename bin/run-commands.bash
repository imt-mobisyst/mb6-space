

# Setup ROS command environment:
if [ -e /opt/ros/iron/setup.bash ]; then
  source /opt/ros/iron/setup.bash
fi
if [ -e ~/mb6-space/install/setup.bash ]; then
  source ~/mb6-space/install/setup.bash
fi

# some Git alias:
alias status='git status -sb .'
alias log='git log -n 4'
alias log-all='git log --all --decorate --oneline --graph'
alias diff='git difftool -t meld'

# some other alias:
alias mb6-build-pkg='colcon build --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON --packages-select'

# User configurations:
if [ ! -f $MB6_WORKSPACE/config.toml ]; then
    cp $MB6_WORKSPACE/bin/default-config.toml $MB6_WORKSPACE/config.toml
fi
export ROS_AUTOMATIC_DISCOVERY_RANGE=`toml get --toml-path /home/guillaume/Projects/mb6-space/config.toml ros2.discovery_range`
export ROS_DOMAIN_ID=`toml get --toml-path /home/guillaume/Projects/mb6-space/config.toml ros2.domain_id`

#source ~/mb6-space/local-config.sh

# Tunned prompt:
PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:($ROS_AUTOMATIC_DISCOVERY_RANGE::$ROS_DOMAIN_ID)\[\033[01;34m\]\w\[\033[00m\].\n\$ '
# Go message:
echo "
  ---  `hostname`:$MB6_WORKSPACE ready on ROS domain: $ROS_DOMAIN_ID  ---
"
