cmake_minimum_required(VERSION 3.3)
project(Heapsort)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp heapsort.h)
add_executable(Heapsort ${SOURCE_FILES})
