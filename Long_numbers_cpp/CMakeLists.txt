cmake_minimum_required(VERSION 3.26)
project(sandbox2)

set(CMAKE_CXX_STANDARD 17)

add_executable(sandbox2 main.cpp
        long_int.cpp
        long_int.h)
