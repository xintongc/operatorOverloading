cmake_minimum_required(VERSION 3.6)
project(operatorOverload)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Rational.cpp Rational.h)
add_executable(operatorOverload ${SOURCE_FILES})