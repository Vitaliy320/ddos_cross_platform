# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("ddos_cross_platform")

# Include sub-projects.
add_subdirectory ("ddos_cross_platform")

set_property (TARGET ddos_cross_platform PROPERTY CXX_STANDARD 20)

