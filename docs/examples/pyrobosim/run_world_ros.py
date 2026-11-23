#!/usr/bin/env python3
"""Run a PyRoboSim world from YAML with its ROS 2 interface and web UI."""

import argparse
from pathlib import Path
import threading

import rclpy
from pyrobosim.core import WorldYamlLoader
from pyrobosim.web import start_ui
from pyrobosim_ros.ros_interface import WorldROSWrapper


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "world",
        nargs="?",
        type=Path,
        default=Path(__file__).with_name("simple_world.yaml"),
        help="world YAML file (default: simple_world.yaml next to this script)",
    )
    parser.add_argument(
        "--no-browser", action="store_true", help="do not open a browser automatically"
    )
    args = parser.parse_args()

    world = WorldYamlLoader().from_file(args.world.expanduser().resolve())
    rclpy.init()
    node = WorldROSWrapper(world=world, state_pub_rate=0.1, dynamics_rate=0.01)
    ros_thread = threading.Thread(target=node.start, daemon=True)
    ros_thread.start()

    # start_ui() blocks until the web server stops and shuts down the world.
    # Stopping rclpy makes node.start() perform its cleanup in the ROS thread.
    try:
        start_ui(world, auto_open=not args.no_browser)
    finally:
        rclpy.try_shutdown()
        ros_thread.join()


if __name__ == "__main__":
    main()
