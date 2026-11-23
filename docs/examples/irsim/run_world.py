#!/usr/bin/env python3
"""Run a custom IR-SIM world and print its first lidar scan summary."""

import argparse
from pathlib import Path

import numpy as np
import irsim


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
        "--steps", type=int, default=1000, help="maximum number of simulation steps"
    )
    parser.add_argument(
        "--headless", action="store_true", help="run without a Matplotlib window"
    )
    parser.add_argument(
        "--action",
        type=float,
        nargs=2,
        metavar=("LINEAR", "ANGULAR"),
        help="constant [v, omega] command instead of the YAML behavior",
    )
    args = parser.parse_args()

    env = irsim.make(
        str(args.world.expanduser().resolve()),
        headless=args.headless,
        seed=42,
    )
    executed_steps = 0
    try:
        for step in range(args.steps):
            env.step(action=args.action)
            executed_steps = step + 1

            if step == 0:
                scan = env.get_lidar_scan()
                ranges = np.asarray(scan["ranges"])
                print(f"beams: {len(ranges)}")
                print(f"valid beams: {int(np.count_nonzero(scan['valid']))}")
                print(
                    "angle min/max/increment: "
                    f"{scan['angle_min']:.3f}/{scan['angle_max']:.3f}/"
                    f"{scan['angle_increment']:.5f} rad"
                )
                print(f"range min/max: {ranges.min():.2f}/{ranges.max():.2f} m")

            env.render(0.05)
            if env.done():
                break
    finally:
        state = np.asarray(env.get_robot_state()).flatten()
        print(
            f"Finished after {executed_steps} steps with status '{env.status}'; "
            f"robot state: {state.tolist()}"
        )
        env.end(0.01)


if __name__ == "__main__":
    main()
