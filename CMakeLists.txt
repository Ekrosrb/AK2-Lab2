cmake_minimum_required(VERSION 2.8)
project(AKLab2)

set(EXE main.cpp)
set(LIB_C calculator.cpp)

add_library(calc ${LIB_C})
add_executable(Main ${EXE})
target_link_libraries(Main calc)
