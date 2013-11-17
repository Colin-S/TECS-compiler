cmake_minimum_required(VERSION 2.8)
project(compiler)

execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${build})

# copy test files ####################################################
file(MAKE_DIRECTORY build/ArrayTest)
file(GLOB ArrayTest_files src/test/ArrayTest/*)
file(COPY ${ArrayTest_files} DESTINATION ArrayTest)

file(MAKE_DIRECTORY build/ExpressionlessSquare)
file(GLOB ExpressionlessSquare_files src/test/ArrayTest/*)
file(COPY ${ExpressionlessSquare_files} DESTINATION ExpressionlessSquare)

file(MAKE_DIRECTORY build/Square)
file(GLOB Square_files src/test/ArrayTest/*)
file(COPY ${Square_files} DESTINATION Square)

add_definitions(-std=c++11 -Wall -O0 -g -DDEBUG)

# src ################################################################
set(main_source_file
  src/main.cpp
)

set(source_files 
  src/compiler.cpp
  src/parser/parserImpl.cpp
  src/tokenizer/tokenizerImpl.cpp
)

# test ###############################################################
set(test_source_files 
  src/test/testMain.cpp
  src/test/testTokenizer.cpp
)
  
# output #############################################################
add_executable(compiler ${main_source_file} ${source_files})
add_executable(testCompiler ${test_source_files} ${source_files})
