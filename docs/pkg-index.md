# Packages Overview

Mobisyst decompose its project devellopement throu several _ROS2_ packages for better modularity. 

- The **basic_pkg** regroups simple but usefull messages definition and nodes. It is both a sandbox area and an entrance point for _mb6_ robotic devellopement. Typically, your _multiplexer_ is there.
- The **multibot_pkg** Includes mesages definition and node implementation for using severals robots in the same times. Different solutions are experiemented, but the main one is based on using several _ROS_ domain Identifiers (the _multibot domid_ package). 
- The **tiled_pkg** is a bridge between the [tiledland project](https://github.com/imt-mobisyst/tiledland) and _ROS2_. _TiledLand_ aims to model the world as connected convex poligonal cells (tiles).

## Construction of a new package

Complete tutorial on _ROS2_ packages can be found in our lecture - [imt-mobisyst.github.io/lct-mobile-robot](https://imt-mobisyst.github.io/lct-mobile-robot/tuto-kick-off/package/).

We choose the _ament_cmake_ method because it allow both _Python_ and _C/C++_ devellopment.
In short: 

```sh
ros2 pkg create --build-type ament_cmake my_beautifull_new_pakage
colcon list
colcon build --packages-select my_beautifull_new_pakage
```
