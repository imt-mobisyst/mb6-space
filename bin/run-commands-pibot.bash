# Setup ROS command environment:

source /opt/ros/iron/setup.bash
if [ -d "~/mb6-space/install" ]; then
  source ~/mb6-space/install/setup.bash
fi


# Pibot configurations:

export ROS_DOMAIN_ID=`~/mb6-space/bin/pibot-number`


# go message:

echo "
  ---  `hostname` ready on ROS domain: $ROS_DOMAIN_ID  ---
"
