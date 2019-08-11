cmake_minimum_required(VERSION 2.8)
project(eyes)

add_subdirectory(cpr)

add_executable(eyes eyes.cpp)
include_directories(${CPR_INCLUDE_DIRS})
target_link_libraries(eyes ${CPR_LIBRARIES})

