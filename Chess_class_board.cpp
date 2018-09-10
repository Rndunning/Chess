//
// Created by Richard on 9/1/2018.
//
#include <iostream>
#include "Chess_class_piece.cpp"
#include "Chess_class_board.h"

class Board
{
    private:
        Piece *m_chess_board[64] = {nullptr};         // Array of ptrs to pieces
    public:
        Board(){
            Piece * w_pawn = new Piece(Piece::Piece_type::Pawn, Piece::Color::White);
            Piece * w_rook = new Piece(Piece::Piece_type::Rook, Piece::Color::White);
            Piece * w_knight = new Piece(Piece::Piece_type::Knight, Piece::Color::White);
            Piece * w_bishop = new Piece(Piece::Piece_type::Bishop, Piece::Color::White);
            Piece * w_queen = new Piece(Piece::Piece_type::Queen, Piece::Color::White);
            Piece * w_king = new Piece(Piece::Piece_type::King, Piece::Color::White);

            Piece * b_pawn = new Piece(Piece::Piece_type::Pawn, Piece::Color::Black);
            Piece * b_rook = new Piece(Piece::Piece_type::Rook, Piece::Color::Black);
            Piece * b_knight = new Piece(Piece::Piece_type::Knight, Piece::Color::Black);
            Piece * b_bishop = new Piece(Piece::Piece_type::Bishop, Piece::Color::Black);
            Piece * b_queen = new Piece(Piece::Piece_type::Queen, Piece::Color::Black);
            Piece * b_king = new Piece(Piece::Piece_type::King, Piece::Color::Black);
            for(int i = A2; i < A3; i++){
                m_chess_board[i] = w_pawn;
            }
            m_chess_board[A1] = m_chess_board[H1] = w_rook;
            m_chess_board[B1] = m_chess_board[G1] = w_knight;
            m_chess_board[C1] = m_chess_board[F1] = w_bishop;
            m_chess_board[D1] = w_queen;
            m_chess_board[E1] = w_king;

            for(int i = A7; i < A8; i++){
                m_chess_board[i] = b_pawn;
            }
            m_chess_board[A8] = m_chess_board[H8] = b_rook;
            m_chess_board[B8] = m_chess_board[G8] = b_knight;
            m_chess_board[C8] = m_chess_board[F8] = b_bishop;
            m_chess_board[D8] = b_queen;
            m_chess_board[E8] = b_king;
        }
        void print_row(int first_value){
            std::string piece;
            int final_value = first_value + 8;
            for(int i = first_value; i < final_value; i++){
                if(m_chess_board[i] != nullptr){
                    m_chess_board[i]->get_piece_string(piece);
                    std::cout<<"|"<<piece;
                } else {
                    std::cout<<"|  ";
                }
            }
            std::cout<<"|"<<std::endl;
        }
        void display_board(void){
            std::string piece;
            std::cout << "------------------------" << std::endl;
            for(int i = 56; i >= 0; i=i-8){
                print_row(i);
                std::cout<< "------------------------"<<std::endl;
            }
        }
};

