cmake_minimum_required(VERSION 3.26)
project(Google_test_examp)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(Google_test_examp main.cpp
        Tests/ClassTest.h
        Tests/test.cpp
        sorts/sorts_main.cpp)
target_link_libraries(Google_test_examp gtest gtest_main)