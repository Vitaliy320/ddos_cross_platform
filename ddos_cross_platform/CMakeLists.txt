﻿# CMakeList.txt : CMake project for ddos_cross_platform, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (ddos_cross_platform "ddos_cross_platform.cpp" "ddos_cross_platform.h" "functions.cpp" "functions.h"    "functions_test.h" "functions_test.cpp")

# TODO: Add tests and install targets if needed.
set_property (TARGET ddos_cross_platform PROPERTY CXX_STANDARD 20)
