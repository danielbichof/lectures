cmake_minimum_required(VERSION 3.5)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

include_directories("${PROJECT_SOURCE_DIR}/include")
set(source_dir "${PROJECT_SOURCE_DIR}/src")

file(GLOB source_dir "${source_dir}/*.cpp")

add_executable(${PROJECT_NAME} ${source_dir})


