cmake_minimum_required(VERSION 3.16)
project(zadanie1_node)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(zadanie1_node src/main.cpp src/node.cpp)