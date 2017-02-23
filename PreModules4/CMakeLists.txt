cmake_minimum_required(VERSION 3.6)
project(PreModules4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp singlelist.cpp singlelist.h)
add_executable(PreModules4 ${SOURCE_FILES})