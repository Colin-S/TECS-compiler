cmake_minimum_required(VERSION 2.6)
project(compiler)

execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${build})

add_definitions(-std=c++11 -Wall -O0 -g -DDEBUG)

set(source_files 
  src/main.cpp
  src/compiler.cpp
  src/parser/parserImpl.cpp
  src/tokenizer/tokenizerImpl.cpp
)
  
add_executable(compiler ${source_files})
