# Setup ROS command environment:
source /opt/ros/iron/setup.bash
if [ -d "~/mb6-space/install" ]; then
  source ~/mb6-space/install/setup.bash
fi

# Pibot configuration:

export ROS_DOMAIN_ID=`~/mb6-space/bin/pibot-number`

echo "
  ---  Pibot ready on ROS domain: $ROS_DOMAIN_ID  ---
"
