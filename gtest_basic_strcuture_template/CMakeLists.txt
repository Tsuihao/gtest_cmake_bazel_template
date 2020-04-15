cmake_minimum_required(VERSION 3.14)
project(gtest_tutorial)


#include_directories(x/y) affects directory scope. 
#All targets in this CMakeList, as well as those in all subdirectories added 
# after the point of its call, will have the path x/y added to their include path.
# If you want to have a finer control of include path: use target_include_directories() inside tests
#include_directories(src)  # let tests could find the header

add_subdirectory(src)
add_subdirectory(lib/googletest)
add_subdirectory(tests)
