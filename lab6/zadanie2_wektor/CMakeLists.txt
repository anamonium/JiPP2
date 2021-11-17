cmake_minimum_required(VERSION 3.16)
project(zadanie2_wektor)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(zadanie2_wektor src/main.cpp src/vector.cpp)