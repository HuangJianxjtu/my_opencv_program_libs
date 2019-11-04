cmake_minimum_required(VERSION 3.1)
project(open_camera_cmake)

find_package(OpenCV)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(open_camera_cmake src/open_camera.cpp)
target_link_libraries(open_camera_cmake ${OpenCV_LIBRARIES})
