#!/bin/bash
set -e
mkdir -p build
cd build
rm -rf *
cmake .. -G "Ninja" -DCMAKE_BUILD_TYPE=Debug
ninja
./main	