#!/bin/bash
set -e
mkdir -p build
cd build
rm -rf *
cmake .. -DCMAKE_BUILD_TYPE=Debug
ninja
./main	