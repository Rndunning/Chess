#include <iostream>
#include <string>
#include <array>
#include "Chess_main.h"
#include "class_piece.cpp"
class Board
{
    public:
        Board(){
        }
//        Piece get_board_value(Board_space space){
//            return m_chess_board[space];
//        }

//        void set_piece(int space, Piece piece){
//            m_chess_board[space] = piece;
//        }
        void create_white_pieces(){
            using Select_piece = Piece::Piece_type;
            using Select_color = Piece::Color;
            Piece piece_to_set;
            Board_space space_to_set;
            bool white_pieces_set = false;
            Select_color Color = Select_color::White;
            for (int space = A1; space <= H8; space++) {
                if(white_pieces_set){
                    Color = Select_color::Black;
                }
                if(space > A3){
                    white_pieces_set = true;
                }
                switch (space_to_set) {
                    case A1:
                    case H1:
                    case A8:
                    case H8:
                        piece_to_set = Piece {Select_piece::Rook, Color};
                        break;
                    case B1:
                    case G1:
                    case B8:
                    case G8:
                        piece_to_set = Piece {Select_piece::Knight, Color};
                        break;
                    case C1:
                    case F1:
                    case C8:
                    case F8:
                        piece_to_set = Piece {Select_piece::Bishop, Color};
                        break;
                    case D1:
                    case D8:
                        piece_to_set = Piece {Select_piece::Queen, Color};
                        break;
                    case E1:
                    case E8:
                        piece_to_set = Piece {Select_piece::King, Color};
                        break;
                    default: piece_to_set = Piece{Select_piece::Null, Color};
                             break;
                }
                if(space >= A2 and space <= H2){
                    piece_to_set = Piece {Select_piece::Pawn, Color};
                } else if(space >= A7 and space <=H7){}
                //set_piece(space, piece_to_set);
            }
        }
    private:
        Piece* m_chess_board[64] = {};
        Board *m_board_new;
        Board *m_board_old;
};

int main() {
    Board Chess_Board;
//    Piece piece_value = Chess_Board.get_board_value(A2);
//    Piece piece_value2 = Chess_Board.get_board_value(A1);

    return 0;
}
