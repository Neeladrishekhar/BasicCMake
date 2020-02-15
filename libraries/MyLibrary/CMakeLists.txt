cmake_minimum_required(VERSION 3.0)

project(MyLibrary)

include_directories(includes)

add_library(MyLibrary src/MyLibrary.cpp)