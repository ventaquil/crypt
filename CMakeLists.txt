cmake_minimum_required(VERSION 3.6)
project(crypt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/ventaquil/crypt/tools.cpp)
add_executable(crypt ${SOURCE_FILES})