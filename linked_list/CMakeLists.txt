cmake_minimum_required (VERSION 2.8.9)
project (linked_list C CXX)

add_definitions(-std=c++11)

include_directories(include)
include_directories(src)

add_executable(linked_list src/main.cpp)
# file(GLOB SOURCES "src/*.cpp")

# add_library(linked_list STATIC ${SOURCES})
# install(TARGETS linked_list DESTINATION /usr/lib)
