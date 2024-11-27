# Mobile System - The master directory for robotics packages

The project to control all the others ROS2 projects...

_mb6-space_ regroups elements for playing with the mobile robots of IMT Nord Europe.
It is the master project on the top off sub-projects, dedicated to robots platform, software modules or scenario applications.

It does not include code but mostly documentation and command tools.

## Install:

_mb6-space_ can be cloned and configured accordingly to ROS2.
Also, the proposed command tools rely on a [toml](https://toml.io) based configuration file.

```sh
pip install toml toml-cli
git clone https://github.com/imt-mobisyst/mb6-space.git
cd mb6-space
./bin/set-mb6-bashrc
source ./bin/run-commands.bash
```

The `set-mb6-bashrc` script adds lines into your `~/.bashrc` file to source `./bin/run-commands.bash` automatically in your shells.

## Get Stated:

_mb6-space_ is a meta-package mainly including the documentation and some useful command tools.
It is designed to be your ros-workspace.

Connect to the [imt-mobisyst](https://imt-mobisyst.github.io/mb6-space) web pages for more information.


## Documentation

The documentation is on [Markdown](https://en.wikipedia.org/wiki/Markdown) format.
It can be served as a _HTML_ web site thanks to [MkDocs](https://www.mkdocs.org/).

```sh
pip install mkdocs
mkdocs serve
```

You can then refer to the [http://127.0.0.1:8000/](documentation).

This documentation is also on line: [https://imt-mobisyst.github.io/mb6-space](imt-mobisyst.github.io/mb6-space)

Deployment is achieved with a public github repository (_imt-mobisyst.github.io.git_):

```sh
git clone git@github.com:imt-mobisyst/imt-mobisyst.github.io.git ../imt-mobisyst-site
./bin/docs-deploy.sh
```

To notice that the documentation repository can be cloned any where on your computer while the `config.toml` is updated accordingly.
