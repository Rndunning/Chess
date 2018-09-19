#include "Chess_main.h"
int main() {
    Board *chess_board = new Board();
    chess_board->display_board();
    bool game = false;
    while(true)
    {
        int current;
        int move;
        std::cin>>current;
        std::cin>>move;
        if(move == 'Q' or current == 'Q')
            break;
        chess_board->basic_move(current, move);
        chess_board->display_board();
    }
    return 0;
}
