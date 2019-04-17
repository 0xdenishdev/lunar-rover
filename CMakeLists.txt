cmake_minimum_required(VERSION 3.8)
project(LunarRover)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Driver.cpp LunarRover.cpp LunarRover.h LunarSurface.cpp LunarSurface.h)
add_executable(LunarRover ${SOURCE_FILES})