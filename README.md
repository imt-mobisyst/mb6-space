# Mobile System - Master for Robotics Packages

The project to control all the others...

_mb6-space_ regroups elements for playing with the mobile robots of IMT Nord Europe.
Its is the master project on the top off sub-project dedicated to robots platform, software modules or scenario application.

It does not include code but mostly documentation and tools.


## Get Stated:

_mb6-space_ is a meta-package only including the documentation.
It is designed to be your ros-workspace.

After cloning you can source `./bin/run-commands.bash` into your `~/.bashrc` file with the `set-ros-bashrc` script.
This will configure automatically all your shells.
The `run-commands` get the configuration elements from a `local-config.sh`. 

```sh
./bin/set-ros-bashrc
sources ~/.bashrc
gedit ./local-config.sh
sources ~/.bashrc
```


## Documentation

The documentation on [Markdown](https://en.wikipedia.org/wiki/Markdown) format.
It can be served as a _HTML_ web site thanks to [MkDocs](https://www.mkdocs.org/).

```sh
pip install mkdocs
mkdocs serve
```

You can then refer to the [http://127.0.0.1:8000/](documentation).

This documentation is also on line: [https://imt-mobisyst.github.io/mb6-space](imt-mobisyst.github.io/mb6-space)

Deployoment is achieved with a public github repository (_imt-mobisyst.github.io.git_):

```sh
git clone git@github.com:ktorz-net/imt-mobisyst.github.io.git ../imt-mobisyst-site
./bin/docs-deploy.sh
```
