# IR-SIM: a Custom World with a Lidar-Equipped Robot

This tutorial creates a custom YAML environment, runs a differential-drive robot, controls it from Python or the keyboard, and reads its simulated lidar.
It was checked with **IR-SIM 2.12.1**, installed from PyPI in an isolated Python environment.

The example contains a 10 × 6 m world divided by a wall with a doorway, two additional obstacles, and one circular differential-drive robot.
The runnable files are available in the documentation:

- [`simple_world.yaml`](examples/irsim/simple_world.yaml): world, robot, obstacles, and lidar configuration;
- [`run_world.py`](examples/irsim/run_world.py): simulation loop with display, headless, and constant-velocity options.

> **ROS-shaped messages are not ROS 2 topics.**
> IR-SIM 2.12.1 can produce dependency-free odometry and scan snapshots through `env.get_msg()`, but the package contains no ROS 2 node or `rclpy` interface.
> A custom bridge is still required for ROS 2 and SLAM; see [ROS 2 integration and SLAM](#5-ros-2-integration-and-slam).

## 1. Install and Run the Example

IR-SIM requires Python 3.10 or newer. Install it preferably in a virtual environment:

```sh
python3 -m pip install ir-sim==2.12.1
```

From the root of this repository, run:

```sh
python3 docs/examples/irsim/run_world.py
```

A Matplotlib window displays the robot, its goal and trajectory, the obstacles, and the lidar rays.
The configured `dash` behavior drives the robot directly through the doorway toward its goal.
With the default 0.1 s time step, this example reaches the goal after 141 simulation steps.

To run without a window, for example in an automated test:

```sh
python3 docs/examples/irsim/run_world.py --headless --steps 300
```

The runner prints a summary of the first scan and the final robot state.
It accepts any YAML path, so custom scenarios do not need to be placed inside the IR-SIM installation:

```sh
python3 docs/examples/irsim/run_world.py /path/to/my_world.yaml
```

The essential simulation loop is:

```python
import irsim

env = irsim.make("my_world.yaml")

for _ in range(1000):
    env.step()       # Advance kinematics, objects, collisions, and sensors.
    env.render(0.05) # Draw and pause for 0.05 wall-clock seconds.

    if env.done():
        break

env.end()
```

## 2. Describe the Environment in YAML

The complete example below corresponds to `simple_world.yaml`.

```yaml
world:
  width: 10.0
  height: 6.0
  step_time: 0.1
  sample_time: 0.1
  offset: [0.0, 0.0]
  control_mode: auto
  collision_mode: stop
  plot:
    figure_pixels: [1000, 650]

robot:
  - name: robot
    kinematics: {name: diff}
    shape: {name: circle, radius: 0.2}
    state: [1.5, 3.0, 0.0]
    goal: [8.5, 3.0, 0.0]
    vel_min: [-0.5, -1.5]
    vel_max: [0.5, 1.5]
    acce: [1.0, 3.0]
    goal_threshold: 0.1
    behavior: {name: dash}
    plot:
      show_goal: true
      show_trajectory: true
    sensors:
      - name: lidar2d
        range_min: 0.05
        range_max: 6.0
        angle_range: 6.283185307179586
        number: 181
        scan_time: 0.1
        noise: false
        std: 0.02
        angle_std: 0.0
        offset: [0.0, 0.0, 0.0]
        plot:
          alpha: 0.25

obstacle:
  - name: wall_lower
    shape:
      name: linestring
      vertices: [[5.0, 0.0], [5.0, 2.0]]
    state: [0.0, 0.0, 0.0]

  - name: wall_upper
    shape:
      name: linestring
      vertices: [[5.0, 4.0], [5.0, 6.0]]
    state: [0.0, 0.0, 0.0]

  - name: pillar
    shape: {name: circle, radius: 0.4}
    state: [3.0, 1.2, 0.0]

  - name: cabinet
    shape: {name: rectangle, length: 1.0, width: 0.6}
    state: [7.5, 4.8, 0.2]
```

### World and robot parameters

- `width`, `height`, and `offset` define the world bounds in metres. Here, the world extends from `(0, 0)` to `(10, 6)`.
- `step_time` is the **simulated** duration of each `env.step()` call, not a guaranteed wall-clock period.
- `sample_time` controls sampling and rendering relative to the simulation step.
- `collision_mode: stop` stops a robot when it collides. Other modes support unobstructed movement or rigid-body contact.
- `state` and `goal` use `[x, y, yaw]`; **yaw is in radians**.
- `kinematics: {name: diff}` selects differential drive. Its action is `[linear_velocity, angular_velocity]`, in m/s and rad/s.
- `vel_min`, `vel_max`, and `acce` constrain velocity and the velocity change per simulation step.
- `behavior: {name: dash}` drives directly toward the goal. It is not a global path planner or obstacle-avoidance method; place a different goal or remove `behavior` when supplying your own controller.
- Add more list entries under `robot` or `obstacle` for additional objects. Object `name` values must be unique.

### Obstacles and doorway geometry

IR-SIM supports circles, rectangles, arbitrary polygons, line strings, compound shapes, and occupancy-grid maps.
The two `linestring` entries form a wall at `x=5` while leaving a doorway between `y=2` and `y=4`.
For the circle and rectangle, `state` places the shape centre and rotates it around that centre.

Do not set `unobstructed: true` on geometry that must be detected by the lidar: unobstructed objects are ignored by its ray casting.

### Lidar parameters

The `sensors` entry is a list. `name: lidar2d` selects the standard 2D lidar implementation.

| Parameter | Meaning |
|---|---|
| `range_min` | Minimum usable range in metres. A closer blocked return reads `range_min` but is marked invalid. |
| `range_max` | Maximum range in metres. A miss reads `range_max` and is marked invalid. |
| `angle_range` | Total field of view in **radians**, centred on the robot/sensor heading. `2π` gives a full scan. |
| `number` | Number of beams, including both angular endpoints. Here, 181 beams cover `-π` to `+π` with approximately 2° spacing. |
| `scan_time` | Scan period recorded in the scan metadata, in seconds. Sensors are updated by the environment's simulation steps. |
| `noise` | Enables Gaussian range noise and optional angular noise. |
| `std` | Range-noise standard deviation in metres, applied to hits only. |
| `angle_std` | Beam-direction noise standard deviation in radians; zero keeps nominal directions. |
| `offset` | Sensor extrinsics `[x, y, yaw]` relative to the robot, in metres and radians. |
| `plot.alpha` | Lidar-ray transparency in Matplotlib. |

The full-circle configuration includes both `-π` and `+π`, which represent the same physical direction.
Remove or account for that duplicate endpoint if a consumer requires unique beam directions.

## 3. Read Lidar Measurements in Python

`env.step()` updates the objects first and then their sensors.
The high-level `env.get_lidar_scan()` method returns a dictionary containing ROS-style scan fields plus IR-SIM-specific validity and velocity data:

```python
from pathlib import Path
import numpy as np
import irsim

world = Path("docs/examples/irsim/simple_world.yaml").resolve()
env = irsim.make(str(world), headless=True, seed=42)

env.step()
scan = env.get_lidar_scan()  # First robot; use id=... to select another one.
ranges = np.asarray(scan["ranges"])
valid = np.asarray(scan["valid"])

print("beam count:", len(ranges))
print("valid returns:", int(valid.sum()))
print("angle increment:", scan["angle_increment"])
print("range of valid returns:", ranges[valid].min(), ranges[valid].max())

env.end()
```

`ranges[i]` corresponds to the nominal beam angle
`scan["angle_min"] + i * scan["angle_increment"]`.
All angles are in radians and ranges in metres.
The `valid` mask distinguishes usable hits from misses and returns inside the blind zone; do not treat every finite `range_max` value as an obstacle hit.

When moving objects manually with setters, call `env.refresh()` before reading dependent state, or use the documented sensor-update options, so geometry and scans stay synchronized.

## 4. Control the Robot

### Constant velocity from the runner

For a differential-drive robot, pass linear and angular velocity as two arguments:

```sh
python3 docs/examples/irsim/run_world.py --steps 50 --action 0.1 0.0
```

The equivalent Python call is:

```python
env.step(action=[0.1, 0.0])  # 0.1 m/s forward, zero yaw rate.
env.step(action=[0.0, 0.0])  # Stop.
```

An explicit action overrides the YAML behavior for that step.
The runner stops at the step limit, on arrival, on collision, or when the UI requests termination.

### Keyboard control

Change the world setting to:

```yaml
world:
  control_mode: keyboard

gui:
  keyboard:
    backend: mpl
```

Then run the same launcher.
With the Matplotlib window focused, use **W/S** for forward/backward motion and **A/D** to turn.
**Space** pauses/resumes, **X** switches between keyboard and automatic control, and **Esc** requests termination.
The optional `ir-sim[keyboard]` extra installs the `pynput` backend; the `mpl` backend shown here needs no additional keyboard package.

## 5. ROS 2 Integration and SLAM

Running this example does **not** create `/cmd_vel`, `/odom`, `/scan`, `/tf`, or `/clock` topics.
IR-SIM 2.12.1 is a Python simulator, not a ROS 2 package with a built-in middleware node.

It does, however, provide useful bridge inputs through `env.get_msg()`:

```python
env.step()
snapshot = env.get_msg(use_inf=True)
robot = snapshot.robots[0]

print(snapshot.header.stamp)  # Simulation time in seconds.
print(robot.odom.ros_type)    # nav_msgs/Odometry (a type hint string).
print(robot.scan.ros_type)    # sensor_msgs/LaserScan (a type hint string).
print(robot.odom.pose.pose.position.x)
print(robot.scan.ranges)
```

These are dependency-free IR-SIM objects, **not** instances of `nav_msgs.msg.Odometry` or `sensor_msgs.msg.LaserScan`.
Each snapshot owns copies of its arrays, so later simulation steps do not modify an earlier snapshot.
The example produces odometry frame IDs `world` and `robot/base_link`, and scan frame ID `robot/laser`.

By default, scan misses remain finite at `range_max`.
`env.get_msg(use_inf=True)` instead maps misses to `+inf` and too-close invalid returns to `-inf`, following the usual ROS/REP-117 convention.

A ROS 2 bridge must still implement:

1. conversion of IR-SIM odometry and scan snapshots into native ROS 2 messages, including conversion of floating-point simulation time into message timestamps;
2. publishers for odometry, lidar, and optionally `/clock`, with suitable QoS settings;
3. TF transforms such as `odom -> robot/base_link` and `robot/base_link -> robot/laser`, with a deliberate choice between the snapshot's `world` frame and the SLAM stack's expected `odom`/`map` frames;
4. a `/cmd_vel` subscription that maps `Twist.linear.x` and `Twist.angular.z` to `env.step(action=[v, omega])`, plus a timeout that commands zero velocity when messages stop;
5. a simulation loop that spins ROS callbacks and advances the environment at a controlled rate.

`env.receive_msg()` is also available for applying external odometry to an IR-SIM object; it does not replace velocity-command handling.
Consequently, IR-SIM provides more ROS-oriented data conversion than a raw Python-only simulator, but this example is **not a drop-in SLAM or Nav2 simulation without a bridge**.

## 6. Extend the Example

- Change `width`, `height`, `offset`, object states, and shape dimensions to reshape the scene.
- Use `shape: {name: polygon, vertices: ...}` for custom solid geometry.
- Set `world.obstacle_map` to an image path or a generator such as `perlin` for an occupancy-grid environment.
- Enable `noise: true` and adjust `std`, `angle_std`, or kinematic noise for less ideal experiments.
- Add robots and select their lidar with `env.get_lidar_scan(id=...)`.
- Use `headless=True` and a fixed `seed` for repeatable batch experiments.
- Install `ir-sim[fast]` to enable the optional compiled lidar kernel for larger scenes.

For the upstream reference, see [Make Environment](https://ir-sim.readthedocs.io/en/stable/usage/make_environment.html), [YAML configuration](https://ir-sim.readthedocs.io/en/stable/yaml_config/configuration.html), [sensor configuration](https://ir-sim.readthedocs.io/en/stable/usage/configure_sensor.html), [grid maps](https://ir-sim.readthedocs.io/en/stable/usage/configure_grid_map.html), and [keyboard/mouse control](https://ir-sim.readthedocs.io/en/stable/usage/configure_keyboard_Mouse_control.html).
