#!/usr/bin/env python3
"""Run a standalone PyRoboSim world from any YAML file path."""

import argparse
from pathlib import Path

from pyrobosim.core import WorldYamlLoader
from pyrobosim.web import start_ui


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
    start_ui(world, auto_open=not args.no_browser)


if __name__ == "__main__":
    main()
