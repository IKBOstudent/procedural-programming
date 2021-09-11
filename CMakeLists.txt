cmake_minimum_required(VERSION 3.20)
project(procedural_programming)

set(CMAKE_CXX_STANDARD 14)

add_executable(procedural_programming
        test-progs/zads.h test-progs/index.cpp test-progs/zad1.cpp test-progs/zad2.cpp test-progs/double_type_input.cpp test-progs/zad3.cpp test-progs/zad4.cpp test-progs/zad5.cpp)
