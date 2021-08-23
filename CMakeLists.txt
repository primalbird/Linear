cmake_minimum_required(VERSION 3.19)
project(linear C)

set(CMAKE_C_STANDARD 99)

add_executable(linear main.c function.c function.h)