cmake_minimum_required(VERSION 3.10)
project(Chess)

set(CMAKE_CXX_STANDARD 17)

add_executable(Chess Chess_main.cpp Chess_main.h class_piece.cpp Chess_class_move.cpp Chess_class_move.h)