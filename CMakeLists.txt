cmake_minimum_required(VERSION 3.14)
project(project_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(project_2 main.cpp Point.cpp Point.h Graph.cpp Graph.h Function.cpp Function.h PolynomialFunction.cpp PolynomialFunction.h ExpFunction.cpp ExpFunction.h)