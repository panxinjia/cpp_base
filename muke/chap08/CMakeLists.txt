cmake_minimum_required(VERSION 3.27)
project(chap08)

set(CMAKE_CXX_STANDARD 17)

add_executable(chap08 main.cpp
        Complex.cpp
        Singleton.cpp
        Singleton.h)
