cmake_minimum_required(VERSION 3.16)
project(zadanie3_trojkat)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(zadanie3_trojkat src/main.cpp src/triangle.cpp)