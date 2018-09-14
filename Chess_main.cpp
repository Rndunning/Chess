#include "Chess_main.h"
int main() {
    Board *chess_board = new Board();
    chess_board->display_board();
    while(true)
    {
        int current;
        int move;
        std::cin>>current;
        std::cin>>move;
        chess_board->basic_move(current, move);
        chess_board->display_board();
        if(move == 'Q')
            break;
    }
    return 0;
}
