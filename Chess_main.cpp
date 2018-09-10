#include <iostream>
#include <string>
#include <array>
#include "Chess_main.h"
#include "Chess_class_board.cpp"

int main() {
    Board *chess_board = new Board();
    chess_board->display_board();
    return 0;
}
