# Setup ROS command environment:

source /opt/ros/iron/setup.bash
export ROS_WORKSPACE_NAME="iron"
if [ -e ~/Projects/mb6-space/install/setup.bash ]; then
  source ~/Projects/mb6-space/install/setup.bash
  export ROS_WORKSPACE_NAME="mb6-space"
fi

# Tunned prompt:

PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:local($ROS_LOCALHOST_ONLY),domain($ROS_DOMAIN_ID):\[\033[01;34m\]\w\[\033[00m\]\n\$ '

# Pibot configurations:

export ROS_LOCALHOST_ONLY=0
export ROS_DOMAIN_ID=`~/mb6-space/bin/pibot-number`


# go message:

if [ "$ROS_LOCALHOST_ONLY" = 1 ]; then
  echo "
    ---  `hostname`:$ROS_WORKSPACE_NAME ready on LocalHost ONLY  ---
  "
else
  echo "
    ---  `hostname`:$ROS_WORKSPACE_NAME ready on ROS domain: $ROS_DOMAIN_ID  ---
  "
fi
