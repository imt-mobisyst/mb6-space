DIRECTORY="`pwd`/`dirname ${BASH_SOURCE[0]}`"
WORKSPACE=`realpath $DIRECTORY/..`

# Setup ROS command environment:
if [ -e /opt/ros/$ROS_DISTRO/setup.bash ]; then
  source /opt/ros/$ROS_DISTRO/setup.bash
fi
if [ -e $WORKSPACE/install/setup.bash ]; then
  source $WORKSPACE/install/setup.bash
fi

# some Git alias:
alias state='git status -sb .'
alias log='git log -n 4'
alias log-all='git log --all --decorate --oneline --graph'
alias diff='git difftool -t meld'

# some other alias:
alias mb6-build-pkg='colcon build --event-handlers console_direct+ --cmake-args -DCMAKE_VERBOSE_MAKEFILE=ON --packages-select'

# User configurations:
if [ ! -f $WORKSPACE/config.toml ]; then
    cp $WORKSPACE/bin/default-config.toml $WORKSPACE/config.toml
fi
export ROS_AUTOMATIC_DISCOVERY_RANGE=`toml get --toml-path $WORKSPACE/config.toml ros2.discovery_range`
export ROS_DOMAIN_ID=`toml get --toml-path $WORKSPACE/config.toml ros2.domain_id`

#source ~/mb6-space/local-config.sh

# Tunned prompt:
PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:($ROS_AUTOMATIC_DISCOVERY_RANGE::$ROS_DOMAIN_ID)\[\033[01;34m\]\w\[\033[00m\].\n\$ '
# Go message:
echo "
  ---  `hostname` is ready on ROS2-$ROS_DISTRO  ---
  `hostname -I`
"
