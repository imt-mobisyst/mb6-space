# State of the Art - Simple 2D Simulations

A rapid review of solutions for simple robot simulations.

- **Main Criteria:** Lightweight and simple, ROS2 compliant (preferred but not required), open-source and patchable.
- **Last modification:** Oct. 2026

## Main Characteristics

Initial overview:

Solution  | Docs | Repo | First impression 
----------|------|------|-------------------
PyRoboSim | [readthedocs.io](https://pyrobosim.readthedocs.io) | [github](https://github.com/sea-bass/pyrobosim) | Nice 
MVSim     | [readthedocs.io](https://mvsim.readthedocs.io/) | [github](https://github.com/MRPT/mvsim) | Nice (3D Rendering)  
Flatland  |  | [github](https://github.com/avidbots/flatland) | Seems dead 
MAES      |  | [github](https://github.com/DEIS-Tools/MAES)  | Seems dead
ir-sim    | [docs](https://ir-sim.readthedocs.io/en/stable) | [github](https://github.com/hanruihua/ir-sim) | Nice
stage ?   | | | 
gazebo    | [gazebosim](https://gazebosim.org/home) | | Heavy solution
Webots    | [cyberbotics](https://cyberbotics.com) | | Heavy solution
VRX       | | [github](https://github.com/osrf/vrx) | Focuses on aquatic, based on Gazebo

From documentation:

Solution  | Philosophy                    | Installation         | ROS2
----------|--------------------------------|---------------------|-------------------
MVSim     | 3D, multi-vehicle              | via `apt`           | Preferred Option
ir-sim    | multi-robot, integrates features like cameras | via `pip`           | Only in philosophy, no reference in docs.
PyRoboSim | Polygon-Based, oriented behavior, complement to Gazebo | via `pip` (limited) or cloned as a _ROS2_ package | On demand

From this list, _PyRoboSim_ meets the most criteria, including a good (though not required) _ROS2_ integration. _ir-sim_ and _MVSim_ are two other alternatives to test.

## Getting Started

### With PyRoboSim

Simple installation with `pip install pyrobosim`. 

Then try it out: 

```sh
curl https://raw.githubusercontent.com/sea-bass/pyrobosim/refs/heads/main/pyrobosim/examples/demo.py > pyrobosim-demo.py

python3 pyrobosim-demo.py
```

The UI works in your favorite browser (HTTP client-server architecture). You can set `bedroom` as the goal and click on navigate.

On ROS2, it is a standard installation:

```sh
cd mb6-space
mkdir -p pkg-extern
git clone https://github.com/sea-bass/pyrobosim.git pkg-extern/pyrobosim
colcon build
source ./bin/run-commands.bash
ros2 launch pyrobosim_ros demo.launch.py
```

It works well (note that the installation process was performed after a `pip install`).
However, at this stage, there are few topics. Further investigation into the virtualization of odom and scan sensors is required for SLAM scenarios.

### With MVSim

Relies on ROS2, provided in a ready-to-use manner:

```sh
sudo apt install ros-jazzy-mvsim
ros2 launch mvsim demo_warehouse.launch.py
```

It works well. Compared to its competitors, it is...

### With ir-sim

Simple to install via `pip install ir-sim` and use:

From the [Grid Map](https://ir-sim.readthedocs.io/en/stable/usage/configure_grid_map.html) example, copy-paste the _Python_ code into an `irsim-demo.py` file and the config YAML code into an `irsim-demo.yaml` file. 
Then run it: `python3 irsim-demo.py`. The vehicle is driven using _WSAD_ keys.

The documentation is quite complete, and the UI is based on `MatPlotLib`. At this stage, it is not clear how to generate custom robot behavior, and connecting the simulator to existing ROS2 packages (like SLAM capabilities) does not seem trivial.

### Conclusion 

At this stage, _pyrobosim_ seems like an interesting solution. It is necessary to investigate the possibilities for customizing the simulation and scenarios. However, it promises a simple first simulation environment allowing development in 3 steps:
- POC in a full Python _pyrobosim_ environment. 
- Migration to a ROS2 compliant solution. 
- Experimentation with more complete 3D simulations like Gazebo.

In this third step, _MVSim_ offers an alternative to _Gazebo_ or _Webots_. It seems lighter than its two competitors because it focuses on mobile robots.

Finally, _ir-sim_ remains a viable option for step 1 (POC in full _Python_ environment).

## Playing with PyRoboSim

The goal is to set up a specific environment and to take control of the robot (1. no ROS2, 2. with ROS2).

> - Work In Progress -
