# Copyright Damian Meden 2017
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
cmake_minimum_required(VERSION 3.4)
PROJECT(tokenizer-tets)


set(CXX_CPP1Y " -std=c++1y")
set(CMAKE_CXX_FLAGS "${CXX_CPP1Y}")
ADD_EXECUTABLE(simple_example_1 simple_example_1.cpp)
ADD_EXECUTABLE(simple_example_2 simple_example_2.cpp)
ADD_EXECUTABLE(simple_example_3 simple_example_3.cpp)
ADD_EXECUTABLE(simple_example_4 simple_example_4.cpp)
ADD_EXECUTABLE(simple_example_5 simple_example_5.cpp)
ADD_EXECUTABLE(simple_example_6 simple_example_6.cpp)

include_directories( ../include )
