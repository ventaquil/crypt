cmake_minimum_required(VERSION 3.6)
project(crypt)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/ventaquil/crypt/tools.cpp src/ventaquil/crypt/tools/symbols.cpp src/ventaquil/crypt/tools/congruences.cpp)
add_executable(crypt ${SOURCE_FILES})
