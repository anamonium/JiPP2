cmake_minimum_required(VERSION 3.16)
project(zadanie1_pojazd)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(zadanie1_pojazd src/main.cpp src/pojazd.cpp)