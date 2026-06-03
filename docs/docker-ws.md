# ROS2 Workspace in a Docker 

ROS consortium provide serveral docker image on [docker hub](https://hub.docker.com/_/ros) for ready to use environments.
Typically you can pull and run the _humble_ base version :

```shell
docker pull ros:humble-ros-base
docker run -it ros:humble-ros-base bash
```

## Configurations

Initialize a  interactive detached (`-id`) docker container with network direct access and a specific ROS workspace :

```shell
docker run -id --name humble -v .:/workspace --network host ros:humble-ros-base bash
```

Connect this container (`-it`), and do any required modifications..

```shell
docker exec -it humble bash
# Then for instance : 
apt update
apt install -y python3-pip nano \
    ros-$ROS_DISTRO-slam-toolbox
pip install toml toml-cli
cd /workspace 
source ./bin/run-commands.bash
rm -r build install 
colcon build
```

Potentially you can modify the default entry point: 

```shell
cp /workspace/docker/basic-entrypoint.sh /ros_entrypoint.sh
```

Create a new image from this running containter.

```shell
exit
docker stop humble
docker ps -a
docker commit humble mb6-humble:latest
```


## Run containner with a specific launch :

Typically:

```shell
docker run -id --name mb6-slam -v .:/workspace --network host -e "ROS_DOMAIN_ID=14" mb6-humble:latest bash -c "ros2 launch slam_toolbox online_sync_launch.py"
```

Stop and start the container to restart the slam process:


```shell
docker stop/start/restart mb6-slam
```

Remove before run again on a fresh container :

```shell
docker stop mb6-slam
docker container rm mb6-slam
```
