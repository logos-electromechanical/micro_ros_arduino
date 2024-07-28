#!/bin/sh

sudo docker run -it --rm -v ~/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm:/toolchain-teensy -v ~/.arduino15/packages/esp32/tools/esp-x32/2302:/toolchain-esp32 -v $(pwd):/project --env MICROROS_LIBRARY_FOLDER=extras microros/micro_ros_static_library_builder:humble
