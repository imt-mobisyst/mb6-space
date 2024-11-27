# Pibot Robot

```sh
ros2 launch slam_toolbox online_sync_launch.py
```

The mobile robot _Pibot_ is built on top of a [Kobuki](https://www.turtlebot.com/turtlebot2/) an [Hokuyo](https://hokuyo-usa.com/) laser range supervised with a raspberry-Pi3 computer card. 

The [ROS2](https://docs.ros.org/) middleware is adapted to this configuration in the [pkg-tbot](https://github.com/imt-mobisyst/pkg-tbot) project.

![Picture of a Pibot](./figs/naked-pibot.png)

A **pibotXX** is automaticaly configured on `IOT IMT Nord Europe` _WiFi_ with a fixed _IP_: `10.89.5.XX`.

## Get Started.

After turning on the robot, the control software is started.
At this point the robot is already ready to be controled. 

The operator from its computer station need to identify and configure the _Pibot_ domain identifier (Domain_ID) and then start a _teleop_ for instance.

_Pibot_ is automaticly connected to `IOT IMT Nord Europe` _WiFi_ (be sure that your computer is on the same network) with a _Domain_ID_ matching its _Pibot_ number. 
For instance `pibot22` is configured with `22`.

On your _ROS_ terminal:

```sh
export ROS_DOMAIN_ID=22
ros2 node list
ros2 topic list 
```

At this point, you can verify that laser is publishing data into the `/scan` topic and that `multiplexer` node is started.
The multiplexer from [basic_node](https://github.com/imt-mobisyst/pkg-basic) package, listen to several command sources to select the most appropriate one. 

So you can take control with a classical _teleop_ node connected to the `multi/cmd_teleop` topic, start slam capability etc...

```sh
ros2 run teleop_twist_keyboard teleop_twist_keyboard cmd_vel:=/multi/cmd_teleop
ros2 launch slam_toolbox online_sync_launch.py
...
```

To notice that your autonomous control should send velocity messages to `multi/cmd_nav` (`/multi/cmd_teleop` is reserved to human teleoperation).

## Get Started v2 (from _mb6_sapce_)

From _mb6_sapce_ directory, it is possible to configure once for all the `ROS_DOMAIN_ID` by editing the `config.toml` and sourcing `./bin/run-commands.bash`

```sh
cd /path/to/mb6_space
gedit config.toml
source ./bin/run-commands.bash
```

Each new terminal will be open on the same configuration.
You can then, connect your __pibotXX_ with `rviz2`.

```sh
rviz2 rviz-conf/simple-pibot.rviz
```

you can also try _SLAM_: 

```sh
# Terminal 1
ros2 launch slam_toolbox online_sync_launch.py

# Terminal 2
rviz2 rviz-conf/pibot-with-map.rviz
```


## Get Started v3 (hard linked)



## Pibot Configuration

_Pibot_ relies on several ros packages: 

- [mb6-space] on the pibot branch for install and service configuration.
- [pkg-tbot](https://github.com/imt-mobisyst/pkg-tbot) for _Kobuki_ + laser drivers and configurations.
- [pkg-basic](https://github.com/imt-mobisyst/pkg-basic) to allow basic/simple controls and tools.

## Shutdown Check List

1. Connectect the _Pibot_ with _SSH_.
2. `sudo poweroff` ou `sudo shutdown -h now`.
3. Wait to be sure the shutdown process is terminated.
4. Switch-off the robot.
5. Plug the robot to permit its recharge.

        