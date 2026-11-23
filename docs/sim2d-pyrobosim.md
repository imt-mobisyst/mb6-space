# PyRoboSim: a Custom World with a Lidar-Equipped Robot

This tutorial creates a small environment from YAML, runs it with or without ROS 2, and reads the simulated lidar measurements.
It was checked with **PyRoboSim 5.0.1**, the version bundled in `pkg-extern/pyrobosim`.

The example contains two rooms connected by a hallway and one circular planar robot.
The complete, runnable files are available in the documentation:

- [`simple_world.yaml`](examples/pyrobosim/simple_world.yaml): world, robot, navigation, and lidar configuration;
- [`run_world.py`](examples/pyrobosim/run_world.py): standalone launcher;
- [`run_world_ros.py`](examples/pyrobosim/run_world_ros.py): launcher with the ROS 2 interface.

> **Lidar visualization is not yet a ROS 2 `LaserScan` interface.**
> PyRoboSim 5.0.1 simulates and displays lidar rays, but its ROS 2 wrapper does not publish `sensor_msgs/msg/LaserScan` or `nav_msgs/msg/Odometry`.
> See [ROS 2 interface and SLAM limitations](#5-ros-2-interface-and-slam-limitations) before using this example with SLAM Toolbox or Nav2.

## 1. Install and Run the Standalone Example

For a quick standalone installation, preferably in a Python virtual environment:

```sh
python3 -m pip install pyrobosim==5.0.1
```

From the root of this repository, run:

```sh
python3 docs/examples/pyrobosim/run_world.py
```

The launcher loads the YAML file next to the script and starts the web interface at [http://127.0.0.1:8050](http://127.0.0.1:8050).
Use `--no-browser` on a headless machine, or pass another world file as the first argument:

```sh
python3 docs/examples/pyrobosim/run_world.py /path/to/my_world.yaml --no-browser
```

In the UI, enter `office` as the **Goal query** and click **Navigate**.
The robot should follow a path through the hallway while its lidar rays are clipped by the environment.

The standalone launcher is intentionally small:

```python
from pathlib import Path

from pyrobosim.core import WorldYamlLoader
from pyrobosim.web import start_ui

world_file = Path("my_world.yaml").resolve()
world = WorldYamlLoader().from_file(world_file)
start_ui(world)
```

Unlike the upstream `demo.py --world-file` option, this launcher accepts a path anywhere on the filesystem; there is no need to copy custom worlds into PyRoboSim's installation directory.

## 2. Describe the Environment in YAML

The complete example below is the content of `simple_world.yaml`.

```yaml
params:
  name: simple_lidar_world
  inflation_radius: 0.05

robots:
  - name: robot
    radius: 0.15
    location: lab
    pose:
      position:
        x: -1.0
        y: 0.0
      rotation_eul:
        yaw: 0.0
        angle_units: degrees
    max_linear_velocity: 0.5
    max_angular_velocity: 1.5
    max_linear_acceleration: 1.0
    max_angular_acceleration: 3.0
    path_planner:
      type: astar
      grid_resolution: 0.1
      grid_inflation_radius: 0.2
      diagonal_motion: true
      compress_path: true
    path_executor:
      type: constant_velocity
      linear_velocity: 0.5
      max_angular_velocity: 1.5
      dt: 0.1
    sensors:
      lidar:
        type: lidar
        update_rate_s: 0.1
        angle_units: degrees
        min_angle: -180.0
        max_angle: 180.0
        angular_resolution: 2.0
        max_range_m: 6.0
    start_sensor_threads: true

rooms:
  - name: lab
    footprint:
      type: polygon
      coords:
        - [-2.0, -2.0]
        - [2.0, -2.0]
        - [2.0, 2.0]
        - [-2.0, 2.0]
    wall_width: 0.1
    color: "#DCEEFF"

  - name: office
    footprint:
      type: box
      dims: [3.0, 3.0]
    pose:
      position:
        x: 4.5
        y: 0.0
    wall_width: 0.1
    color: "#E8F5E9"

hallways:
  - room_start: lab
    room_end: office
    width: 0.8
    conn_method: auto
    is_open: true
    is_locked: false
    color: "#EEEEEE"
```

### Geometry and coordinates

- Distances are in **metres**. The world uses a 2D Cartesian frame: `x` points right and `y` points up in the UI.
- A `polygon` footprint lists the room's vertices. A `box` uses `dims: [width, height]`; its `pose` places its centre.
- The robot starts at `(-1.0, 0.0)` with a zero yaw. A positive yaw rotates it counterclockwise.
- `location: lab` names the initial room, while `pose` selects the exact initial position instead of sampling one.
- `wall_width` controls the wall thickness. `inflation_radius` adds collision clearance around world geometry.
- The hallway uses `conn_method: auto` to connect the room centroids. Its `width` must leave enough space for the robot and collision margins.
- `path_planner` and `path_executor` are only needed for autonomous navigation. They can be omitted for a world driven exclusively by velocity commands.

### Lidar parameters

The `sensors` entry is a dictionary, so `lidar` is the sensor's name and `type: lidar` selects PyRoboSim's `Lidar2D` implementation.

| Parameter | Meaning |
|---|---|
| `update_rate_s` | Update **period in seconds**, not frequency in hertz. `0.1` gives 10 updates per second. |
| `angle_units` | Units of the three angle fields below: `degrees` or `radians`. |
| `min_angle`, `max_angle` | Scan limits relative to the robot heading. This example covers a full circle. |
| `angular_resolution` | Angle between two beams. The inclusive `-180` to `180` range at `2°` gives 181 beams. |
| `max_range_m` | Maximum ray length in metres. A ray without a closer hit has this length. |
| `start_sensor_threads` | Starts background updates when the robot is created. |

The lidar is attached at the robot's pose; this version has no YAML field for a sensor offset, noise model, or minimum range.
Keep this in mind when comparing the simulated data with a physical lidar.

## 3. Read Lidar Measurements in Python

The web UI displays the rays, while the Python API exposes the corresponding range array.
The following check can be run from the repository root:

```sh
python3 - <<'PY'
from pathlib import Path
from pyrobosim.core import WorldYamlLoader

world_file = Path("docs/examples/pyrobosim/simple_world.yaml")
world = WorldYamlLoader().from_file(world_file)
robot = world.get_robot_by_name("robot")
lidar = robot.sensors["lidar"]

# An explicit update makes a measurement immediately available for this check.
lidar.update()
ranges = lidar.get_measurement()
print(f"beams: {lidar.num_beams}")
print(f"ranges: {len(ranges)}")
print(f"min/max measured range: {ranges.min():.2f}/{ranges.max():.2f} m")

world.shutdown()
PY
```

`ranges[i]` corresponds to `lidar.angles[i]`.
Although the YAML uses degrees here, `lidar.angles` is stored in **radians** and ranges are returned in metres.
With background threads enabled, subsequent measurements update automatically; with `start_sensor_threads: false`, call `update()` whenever a new measurement is required.

## 4. Run the Same World with ROS 2

Build and source the workspace using the normal PyRoboSim setup for your ROS distribution.
For example, on ROS 2 Jazzy:

```sh
source /opt/ros/jazzy/setup.bash
colcon build --packages-up-to pyrobosim_ros
source install/setup.bash
python3 docs/examples/pyrobosim/run_world_ros.py
```

The ROS launcher loads the same arbitrary YAML path, creates a `WorldROSWrapper`, spins it in a background thread, and starts the web UI in the main thread.
In another sourced terminal, inspect the interfaces:

```sh
ros2 topic list
ros2 topic echo /robot/robot_state
```

Publish a forward velocity command; press **Ctrl+C** to stop publishing:

```sh
ros2 topic pub -r 10 /robot/cmd_vel geometry_msgs/msg/Twist \
  "{linear: {x: 0.2}, angular: {z: 0.0}}"
```

The wrapper latches the latest command briefly and then ramps the velocity down, so the robot stops after the publisher stops.
The robot name in the YAML determines the topic prefix: changing `name: robot` to `name: bot1` produces `/bot1/cmd_vel` and `/bot1/robot_state`.

## 5. ROS 2 Interface and SLAM Limitations

In PyRoboSim 5.0.1, `WorldROSWrapper` provides velocity subscriptions, custom robot-state messages, navigation actions, and world services.
For the example robot, the two main topics are:

| Topic | Type | Purpose |
|---|---|---|
| `/robot/cmd_vel` | `geometry_msgs/msg/Twist` | Command planar velocity. |
| `/robot/robot_state` | `pyrobosim_msgs/msg/RobotState` | Publish the robot's pose and execution state. |

The simulated lidar remains available through the Python sensor object and the web UI, but **no `/scan` topic is created**.
Similarly, `/robot/robot_state` is not a standard odometry message, and the wrapper does not provide the usual TF tree.

A conventional ROS 2 SLAM setup therefore needs an additional bridge or an extension to `WorldROSWrapper` that provides:

1. `sensor_msgs/msg/LaserScan`, using `lidar.angles` and `get_measurement()`, with consistent angle/range metadata and a lidar frame;
2. `nav_msgs/msg/Odometry` and the `odom -> base_link` transform, plus the `base_link -> lidar` transform;
3. consistent timestamps and frames for all messages;
4. optionally, realistic noise, odometry drift, sensor extrinsics, and a simulated clock if required by the target stack.

Publishing the exact simulator pose as odometry is useful for a first integration test, but it is ground truth rather than a realistic noisy estimate.
Consequently, the current example is suitable for world prototyping, navigation experiments, and lidar visualization; it is **not a drop-in SLAM simulation yet**.

## 6. Extend the Example

- Change room vertices, box dimensions, or poses to reshape the map.
- Add rooms and connect them with `hallways`; use `conn_method: points` when a hallway must follow explicit waypoints.
- Add location and object metadata when the scenario needs furniture or manipulable objects.
- Add more entries under `robots` for multi-robot experiments; each robot can have its own sensors and planner.
- Keep custom YAML files in your own package or scenario directory and pass their paths to the launchers.

For the complete upstream reference, see the [world YAML schema](https://pyrobosim.readthedocs.io/en/latest/yaml/world_schema.html), [sensor documentation](https://pyrobosim.readthedocs.io/en/latest/usage/sensors.html), and [basic usage](https://pyrobosim.readthedocs.io/en/latest/usage/basic_usage.html).
