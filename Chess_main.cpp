#include <iostream>
#include <string>
#include <array>
#include "Chess_main.h"
#include "class_piece.cpp"
class Board
{
    public:
        Board(){
            // Could make pieces static, so that they aren't lost
            // Create pieces in class_piece
            // set pieces in class_board
            Piece w_pawn = Piece(Piece::Piece_type::Pawn, Piece::Color::White);
            Piece w_rook = Piece(Piece::Piece_type::Rook, Piece::Color::White);
            Piece w_knight = Piece(Piece::Piece_type::Knight, Piece::Color::White);
            Piece w_bishop = Piece(Piece::Piece_type::Bishop, Piece::Color::White);
            Piece w_queen = Piece(Piece::Piece_type::Queen, Piece::Color::White);
            Piece w_king = Piece(Piece::Piece_type::King, Piece::Color::White);

            Piece b_pawn = Piece(Piece::Piece_type::Pawn, Piece::Color::Black);
            Piece b_rook = Piece(Piece::Piece_type::Rook, Piece::Color::Black);
            Piece b_knight = Piece(Piece::Piece_type::Knight, Piece::Color::Black);
            Piece b_bishop = Piece(Piece::Piece_type::Bishop, Piece::Color::Black);
            Piece b_queen = Piece(Piece::Piece_type::Queen, Piece::Color::Black);
            Piece b_king = Piece(Piece::Piece_type::King, Piece::Color::Black);

            for(int i = A2; i < A3; i++){
                m_chess_board[i] = &w_pawn;
            }
            m_chess_board[A1] = m_chess_board[H1] = &w_rook;
            m_chess_board[B1] = m_chess_board[G1] = &w_knight;
            m_chess_board[C1] = m_chess_board[F1] = &w_bishop;
            m_chess_board[D1] = &w_queen;
            m_chess_board[E1] = &w_king;

            for(int i = A7; i < A8; i++){
                m_chess_board[i] = &b_pawn;
            }
            m_chess_board[A8] = m_chess_board[H8] = &b_rook;
            m_chess_board[B8] = m_chess_board[G8] = &b_knight;
            m_chess_board[C8] = m_chess_board[F8] = &b_bishop;
            m_chess_board[D8] = &b_queen;
            m_chess_board[E8] = &b_king;
        }
    private:
        Piece* m_chess_board[64] = {};
        Board *m_board_new;
        Board *m_board_old;

        // Consider adding functions that declare pieces
};

int main() {
    Board Chess_Board;
//    Piece piece_value = Chess_Board.get_board_value(A2);
//    Piece piece_value2 = Chess_Board.get_board_value(A1);

    return 0;
}
