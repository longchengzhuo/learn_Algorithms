cmake_minimum_required(VERSION 3.30)
project(algMIT)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/sort_header)
add_executable(select_sort select_sort.cpp)
add_executable(bubble_sort bubble_sort.cpp)
add_executable(insert_sort insert_sort.cpp)

