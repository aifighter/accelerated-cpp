cmake_minimum_required(VERSION 3.14)
project(accelerated_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(accelerated_cpp src/main.cpp src/median.hpp src/median.cpp src/Student_info.hpp src/Student_info.cpp src/Student_info.hpp src/grade.hpp src/grade.cpp)