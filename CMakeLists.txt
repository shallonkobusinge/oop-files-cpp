cmake_minimum_required(VERSION 3.22)
project(class_manipulations_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(class_manipulations_cpp main.cpp utils/models.cpp services/user-service.cpp utils/header.h services/employee-service.cpp)
