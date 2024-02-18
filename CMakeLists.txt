cmake_minimum_required(VERSION 3.5)

project(main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/3rdparty/glfw/include")
set(source_dir "${PROJECT_SOURCE_DIR}/src")
set(3rdparty_dir "${PROJECT_SOURCE_DIR}/3rdparty")


file(GLOB source_dir "${source_dir}/*.cpp")

add_executable(${PROJECT_NAME} ${source_dir} )
target_link_libraries(${PROJECT_NAME} PRIVATE "${3rdparty_dir}/glfw/build/src/libglfw3.a")
