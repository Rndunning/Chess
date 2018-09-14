cmake_minimum_required(VERSION 3.10)
project(Chess)

set(CMAKE_CXX_STANDARD 17)

add_executable(Chess Chess_main.cpp Chess_main.h Chess_class_move.cpp Chess_class_move.h Chess_class_board.cpp Chess_class_piece.cpp Chess_class_board.h Chess_class_piece.h)