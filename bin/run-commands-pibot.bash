source /opt/ros/iron/setup.bash
if [ -d "~/mb6-space/install" ]; then
  source ~/mb6-space/install/setup.bash
fi

export PIBOT_NUMBER=`~/mb6-space/bin/pibot-number`
echo $PIBOT_NUMBER
