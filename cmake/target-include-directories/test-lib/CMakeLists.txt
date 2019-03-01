
cmake_minimum_required(VERSION 3.12)

add_library(test-lib STATIC src/Lib.cpp)

target_include_directories(test-lib PUBLIC inc)

