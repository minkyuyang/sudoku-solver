cmake_minimum_required(VERSION 3.9)
project(sudoku-solver)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror -Wextra -pedantic -pedantic-errors")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCE_FILES
        test/main.cpp
        src/SudokuSolver.cpp
        include/SudokuSolver.h
        )

add_executable(sudoku-solver ${SOURCE_FILES})