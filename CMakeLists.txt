cmake_minimum_required(VERSION 3.22)
project(ApprendreCPP)

set(CMAKE_CXX_STANDARD 23)

include_directories(includes)

add_executable(ApprendreCPP EnumMain.cpp includes/Table.cpp includes/Table.h includes/Enum.cpp includes/Enum.h)
