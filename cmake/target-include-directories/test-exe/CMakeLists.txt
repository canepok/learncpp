
cmake_minimum_required(VERSION 3.12)

# Uncomment below line in case libtest is not included before
#add_subdirectory(../test-lib ${CMAKE_BINARY_DIR}/libtest)

add_executable(test-exe main.cpp)

target_link_libraries(test-exe test-lib)

