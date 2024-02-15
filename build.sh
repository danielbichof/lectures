#!/bin/bash

mkdir -p build
cd build
rm -rf *
cmake .. -G "Ninja" -DCMAKE_BUILD_TYPE=Debug
ninja
./main	