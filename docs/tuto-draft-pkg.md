
## Hello-World with ROS2

Follow the instruction form the official documentations: [docs.ros.org](https://docs.ros.org).
You also find a lot of valuable information on the ROS1 wiki: [wiki.ros.org](https://wiki.ros.org) (typically the definition of the mesages).

you can build your first package: (we prefer cmake methode for both C++ and python.

```sh
ros2 pkg create --build-type ament_cmake_python draft
colcon build --packages-select my_package
source ./install/setup.bash
```

For Python user, the simplest way to include Python-based ROS node depending on a specific [Python Package](https://docs.python.org/3/glossary.html#term-package) is to use `install` instruction in `CMakeLists.txt`.
Considering that you work into a `scripts` directory:

```sh
# Python elements
install( DIRECTORY scripts/myPythonPkg DESTINATION lib/${PROJECT_NAME})
install( PROGRAMS scripts/myNode DESTINATION lib/${PROJECT_NAME})
```