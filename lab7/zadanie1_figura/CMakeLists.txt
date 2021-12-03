cmake_minimum_required(VERSION 3.16)
project(zadanie1_figura)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(zadanie1_figura src/main.cpp src/figura.cpp)