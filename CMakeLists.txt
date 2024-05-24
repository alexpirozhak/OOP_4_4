cmake_minimum_required(VERSION 3.27)
project(OOP_4_4)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_4_4 main.cpp
        Circle.cpp
        Rectangle.cpp
        Trapezium.cpp)
add_subdirectory(Google_test)
