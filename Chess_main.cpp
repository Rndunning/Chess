#include <iostream>
#include "Chess_main.h"

class Piece {
    private:

        Piece_type m_type;
        Color m_color;
        Status m_status;
        bool Moved;

    public:
        enum class Color{
                White, Black
        };
        enum class Status{
                Alive, Dead
        };
        enum class Piece_type{
                Pawn, Rook, Knight, Bishop, Queen, King
        };
        Piece(Piece_type type=Piece_type::Pawn, Color team=Color::White){
            m_type = type;
            m_color = team;
            m_status = Status::Alive;
            Moved = false;
        }
        Piece create_piece(Piece_type type=Piece_type::Pawn, Color team=Color::White){
            m_type = type;
            m_color = team;
            m_status = Status::Alive;
            Moved = false;
        }

};

class Board
{
    public:
        Board(){
            Piece w_pawn;
            Piece w_rook = {Select_piece::Rook, Select_color::White};
            Piece w_
            for(int w_p = 8; w_p < 16; w_p++){
                m_chess_board[w_p] = w_pawn;
            }
        }
        Piece get_board_value(Board_space space){
            return m_chess_board[space];
        }

        void set_piece(int space, Piece piece){
            m_chess_board[space] = piece;
        }
    private:
        Piece m_chess_board[64] = {};
        Board *m_board;
};

int main() {
    Board Chess_Board;
    Piece piece_value = Chess_Board.get_board_value(A2);
    Piece piece_value2 = Chess_Board.get_board_value(A1);

    return 0;
}

void create_white_pieces(Board board){
    using Select_piece = Piece::Piece_type;
    using Select_color = Piece::Color;
    Piece w_pawn;
    for(Board_space w_p = A2; w_p < A3; w_p++){
        Board::set_piece(w_p, w_pawn);
    }
    Piece w_rook = {};
}