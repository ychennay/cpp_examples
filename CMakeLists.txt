cmake_minimum_required(VERSION 3.19)
project(standardLibrary)

set(CMAKE_CXX_STANDARD 17)

add_executable(standardLibrary vectors.cpp linkedlist.c)
add_executable(example1 example1.cpp)
add_executable(example2 example2.cpp)