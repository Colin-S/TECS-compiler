#!/bin/bash

# Force use of latest g++ (for C++11)
export CXX=g++-4.8

mkdir ./build
cd ./build
cmake ..
make -j4
./testCompiler
cd ..
