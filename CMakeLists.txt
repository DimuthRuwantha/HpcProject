cmake_minimum_required(VERSION 3.7)
project(HpcProject)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp sequence/Sequence.cpp sequence/Sequence.h parallel/Parallel.cpp parallel/Parallel.h)
add_executable(HpcProject ${SOURCE_FILES})