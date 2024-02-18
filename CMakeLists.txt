cmake_minimum_required(VERSION 3.20)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")
set(source_dir "${PROJECT_SOURCE_DIR}/src")
set(3rdparty_dir "${PROJECT_SOURCE_DIR}/3rdparty")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/3rdparty/glfw/include")

file(GLOB source_dir "${source_dir}/*.cpp")
add_executable(${PROJECT_NAME} ${source_dir})

add_subdirectory(${3rdparty_dir}/glfw)

target_link_libraries(${PROJECT_NAME} PUBLIC glfw)

set(CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/build/3rdparty/glfw/")