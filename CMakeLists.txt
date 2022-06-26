cmake_minimum_required(VERSION 3.22)
project(ApprendreC__)

set(CMAKE_CXX_STANDARD 23)

include_directories(includes)

add_executable(ApprendreC__ main.cpp includes/Table.cpp includes/Table.h)
