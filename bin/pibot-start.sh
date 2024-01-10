# Start tbot node...
cd ~/mb6-space
source ./bin/pibot-run-commands.bash
git pull
ros2 launch tbot_node minimal_launch.yaml
