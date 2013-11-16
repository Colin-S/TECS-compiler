cmake_minimum_required(VERSION 2.6.0)
project(compiler)

execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${build})

add_definitions(-std=c++11 -Wall -O0 -g -DDEBUG)

set(main_source_file
  src/main.cpp
)

set(source_files 
  src/compiler.cpp
  src/parser/parserImpl.cpp
  src/tokenizer/tokenizerImpl.cpp
)

set(test_source_files 
  src/test/testMain.cpp
  src/test/testTokenizer.cpp
)
  
add_executable(compiler ${main_source_file} ${source_files})
add_executable(testCompiler ${test_source_files} ${source_files})
