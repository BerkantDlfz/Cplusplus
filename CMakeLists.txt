cmake_minimum_required(VERSION 3.6)
project(deneme2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp deneme.h deneme2.h deneme3.h)
add_executable(deneme2 ${SOURCE_FILES})