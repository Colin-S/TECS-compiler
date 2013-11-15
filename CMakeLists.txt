cmake_minimum_required(version 2.6)
project(compiler)

execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${build})

add_definitions(-std=c++11 -Wall -O0 -g)
add_executable(compiler main.cpp)
