cmake_minimum_required(VERSION 3.10)

project(FOR_GDB)

set(SOURCE_FILES main.cpp)

add_executable(FOR_GDB ${SOURCE_FILES})

set(CMAKE_BUILD_TYPE Debug)
