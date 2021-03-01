cmake_minimum_required(VERSION 3.17)
project(Lab1_2Term)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)


add_executable(Lab1_2Term main.cpp)
target_link_libraries(Lab1_2Term gtest gtest_main)