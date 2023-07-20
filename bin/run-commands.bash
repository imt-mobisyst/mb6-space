# Setup ROS command environment:

source /opt/ros/iron/setup.bash
export ROS_WORKSPACE_NAME="iron"
if [ -e ~/mb6-space/install/setup.bash ]; then
  source ~/mb6-space/install/setup.bash
  export ROS_WORKSPACE_NAME="mb6-space"
fi

# User configurations:



# go message:

echo "
  ---  `hostname`:$ROS_WORKSPACE_NAME ready on ROS domain: $ROS_DOMAIN_ID  ---
"