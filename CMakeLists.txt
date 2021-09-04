cmake_minimum_required(VERSION 3.19)
project(standardLibrary)

set(CMAKE_CXX_STANDARD 17)

add_executable(standardLibrary vectors.cpp linkedlist.c day2.cpp monte_carlo.cpp day3.cpp matmul.cpp)
add_executable(example1 example1.cpp)
add_executable(example2 example2.cpp)
add_executable(day2 day2.cpp)
add_executable(monte_carlo monte_carlo.cpp)
add_executable(day3 day3.cpp)
add_executable(matmul matmul.cpp)