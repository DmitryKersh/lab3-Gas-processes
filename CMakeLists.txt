cmake_minimum_required(VERSION 3.14)
project(lab3_Gas)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab3_Gas
        AbstractProcess.cpp
        AbstractProcess.h
        IsoBarProcess.cpp
        IsoBarProcess.h
        IsoChorPocess.cpp
        IsoChorPocess.h
        main.cpp)
