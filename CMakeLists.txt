cmake_minimum_required(VERSION 3.23)
project(Algorithms)

set(CMAKE_CXX_STANDARD 23)

add_executable(Algorithms main.cpp BubbleSort.cpp BubbleSort.h InsertionSort.cpp InsertionSort.h MergeSort.cpp MergeSort.h)
