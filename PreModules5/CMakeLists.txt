cmake_minimum_required(VERSION 3.6)
project(PreModules5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp doublecircular.cpp doublecircular.h)
add_executable(PreModule3 ${SOURCE_FILES})