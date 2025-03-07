cmake_minimum_required(VERSION 3.30)
project(algMIT)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/sort_header)
add_executable(shell_sort shell_sort.cpp)
add_executable(linklist_delete linklist_delete.cpp)
add_executable(linklist_reverse linklist_reverse.cpp)

