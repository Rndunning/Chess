//
// Created by Richard on 9/1/2018.
//

#ifndef CHESS_CLASS_BOARD_H
#define CHESS_CLASS_BOARD_H
#include "Chess_class_board.h"
#endif

Board::Board()
{
    Piece * w_pawn = new Piece;
    w_pawn->set_color(Piece::Color::White);
    w_pawn->set_piece_type(Piece::Piece_type::Pawn);
    Piece * w_rook = new Piece;
    w_rook->set_color(Piece::Color::White);
    w_rook->set_piece_type(Piece::Piece_type::Rook);
    Piece * w_knight = new Piece;
    w_knight->set_color(Piece::Color::White);
    w_knight->set_piece_type(Piece::Piece_type::Knight);
    Piece * w_bishop = new Piece;
    w_bishop->set_color(Piece::Color::White);
    w_bishop->set_piece_type(Piece::Piece_type::Bishop);
    Piece * w_queen = new Piece;
    w_queen->set_color(Piece::Color::White);
    w_queen->set_piece_type(Piece::Piece_type::Queen);
    Piece * w_king = new Piece;
    w_king->set_color(Piece::Color::White);
    w_king->set_piece_type(Piece::Piece_type::King);

    Piece * b_pawn = new Piece;
    b_pawn->set_color(Piece::Color::Black);
    b_pawn->set_piece_type(Piece::Piece_type::Pawn);
    Piece * b_rook = new Piece(Piece::Piece_type::Rook, Piece::Color::Black);
    b_rook->set_color(Piece::Color::Black);
    b_rook->set_piece_type(Piece::Piece_type::Rook);
    Piece * b_knight = new Piece;
    b_knight->set_color(Piece::Color::Black);
    b_knight->set_piece_type(Piece::Piece_type::Knight);
    Piece * b_bishop = new Piece(Piece::Piece_type::Bishop, Piece::Color::Black);
    b_bishop->set_color(Piece::Color::Black);
    b_bishop->set_piece_type(Piece::Piece_type::Bishop);
    Piece * b_queen = new Piece(Piece::Piece_type::Queen, Piece::Color::Black);
    b_queen->set_color(Piece::Color::Black);
    b_queen->set_piece_type(Piece::Piece_type::Queen);
    Piece * b_king = new Piece;
    b_king->set_color(Piece::Color::Black);
    b_king->set_piece_type(Piece::Piece_type::King);

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

Board::~Board()
{
}

void Board::print_row(int row_index)
{
    std::string piece;
    int final_value = row_index + 8;
    for(int i = row_index; i < final_value; i++){
        if(m_chess_board[i] != nullptr){
            piece = m_chess_board[i]->get_piece_string();
            std::cout<<"|"<<piece;
        } else {
            std::cout<<"|  ";
        }
    }
    std::cout<<"|"<<std::endl;
}
void Board::display_board(void)
{
    std::string piece;
    std::cout << "------------------------" << std::endl;
    for(int i = 56; i >= 0; i=i-8){
        print_row(i);
        std::cout<< "------------------------"<<std::endl;
    }
}

void Board::basic_move(int current_location, int new_location)
{
    m_chess_board[new_location] = m_chess_board[current_location];
    m_chess_board[current_location] = NULL;
}