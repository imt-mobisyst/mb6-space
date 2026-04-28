# Ezbot Robot

_Ezbot_ is a mobile robot built on top of a [stater kit](https://www.ez-wheel.com/en/development-kit-for-agv-and-amr) of _ez-wheel_.
The kit include an on-board computer runing a [ROS2](https://docs.ros.org/) control architecture.

![Picture of a Ezbot](./figs/naked-ezbot.png)

## Get Started

After turning on the robot, the control software is started.
At this point the robot is ready to be controled. 

The operator from its computer station need to identify and configure the _Ezbot_ domain identifier (Domain_ID) and then start a _teleop_ for instance.


An _Ezbot_ is automaticaly configured on `IOT IMT Nord Europe` _WiFi_ with a fixed unique Ros domain identifier, allowing a _supervision-pc_ to connect.
For instance `Ezbot 44` should be configured with environmment variable `ROS_DOAMIN_ID=44`.
At this point, you can verify that laser is publishing data into the `/scan` and `/cmd_vel` topics.

```sh
export ROS_DOMAIN_ID=44
ros2 topic list 
rviz2 rviz-conf/simple-scan.rviz
```

You can also try a _SLAM_: 

```sh
# Terminal 1
ros2 launch slam_toolbox online_sync_launch.py

# Terminal 2
rviz2 rviz-conf/slam-monitor.rviz
```

## Connect the robot :

The _Ezbot_ integrates nativelly control software on a dockerized machine insite its small linux machine.
The strngest way to connect this machine is to use ethernet.

###  Eth configuation :

Connect the robot with _RJ45_ cable and turn-on the robot
You have to configure a fixed ip-adress on your conputer :
> Ip: 192.168.50.1 : 255.255.255.0 : 192.168.50.1

The robot itself is on _192.168.50.2_ with `swd_sk` user name :

```sh
ssh swd_sk@192.168.50.2
```


### Enter the robot docker

The _ROS2 Ezbot driver_ is running in a _docker_ named _ros-humble_

```sh
docker exec -it -u swd_sk ros-humble bash
```

Inside the docker, you can `stop`, and `start` the control software with : 

```sh
/opt/ezw/sbin/sce-swd-starter-kit-bringup.sh stop
/opt/ezw/sbin/sce-swd-starter-kit-bringup.sh start
```

This way it is possible to launch specific launchfile rather than the default one.

Outside you can typically restart the docker in its default saved configuration (errasing all your modifications).

```sh
exit
docker restart ros-humble
```

> /!\ Attention the robot did not support verry well eth and wifi in the same time. In case of difficulty, shutdown the wifi...

## IMT-MobySyst Configuration :

The _starter_kit_ bringup is based on a the `starter_kit.launch.py` launch file in the `swd_starter_kit_bringup` ROS2 package installed in the `pkg-bbot/ros-humble_ws` workspace.
The startegy is mainly to replace this launch file, the old one is saved as `starter_kit_default`.
Attention, any modifition in ros-humble_ws is persistant after docker restart, in fact the docker directory match the one in the host machine.

In facts, `Starter_kit_mb6` introduces a multiplexer, our parasit from our basic package and a specific joystic configuration.

```sh
docker exec -it -u swd_sk ros-humble bash
#sudo chown -R swd_sk:swd_sk install
# Clone basic packages
cd pkg-bbot/ros-humble_ws/src
git clone bot@192.168.50.1:mb6-space/pkg-basic
# Get updated launch file
cd ../swd_starter_kit_bringup/launch
cp starter_kit.launch.py starter_kit_default.launch.py
scp bot@192.168.50.1:mb6-space/launch/swd_starter_kit_mb6.launch.py .
cp swd_starter_kit_mb6.launch.py starter_kit.launch.py
cd
cd pkg-bbot/ros-humble_ws
colcon build
/opt/ezw/sbin/sce-swd-starter-kit-bringup.sh start
```


## Some memos :

- Set the wifi down: `sudo ip link set wlan1 down`
- Docker starter: based on _supervisor service_ see: `/etc/supervisor/conf.d/ezw-swd.conf`











