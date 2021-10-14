cmake_minimum_required(VERSION 3.5)

project(SimppleRefrigerationSystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS}")

add_executable(SimppleRefrigerationSystem main.cpp)
target_include_directories(SimppleRefrigerationSystem PUBLIC simpp)
