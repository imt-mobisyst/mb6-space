# Packages: Basic

Those packages regroups simple and basic tools mostly for testing and illustrate `ROS2` features.

- _basic_msg_: Dedicated to define specifics ROS2 messages.
- _basic_node_: Simple processes

## Get Started

It is possible to use simple clone and install script : 

```sh
./bin/clone-basic
source ./bin/run-commands.bash
```

To test the install you can try the `multiplexer` node :

```sh
ros2 run basic_node multiplexer
```

This node filter velocity commands from deverals source with a priority preferecny.
A `ros2 topic list` commands should show the `/multi/cmd_nav` and `/multi/cmd_teleop` topics for input (`teleop` get the piority on `nav`) and an output topic `\cmd_vel`.


