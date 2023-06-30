# Setup ROS command environment:

source /opt/ros/iron/setup.bash
export ROS_WORKSPACE_NAME="iron"
if [ -e ~/Projects/mb6-space/install/setup.bash ]; then
  source ~/Projects/mb6-space/install/setup.bash
  export ROS_WORKSPACE_NAME="mb6-space"
fi

# Pibot configurations:

export ROS_DOMAIN_ID=`~/mb6-space/bin/pibot-number`


# go message:

echo "
  ---  `hostname`:$ROS_WORKSPACE_NAME ready on ROS domain: $ROS_DOMAIN_ID  ---
"
