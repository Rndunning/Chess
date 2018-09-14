//
// Created by Richard on 9/5/2018.
//

#ifndef CHESS_CLASS_PIECE_H
#define CHESS_CLASS_PIECE_H
#include "Chess_class_piece.h"
#endif

std::string Piece::get_piece_string()
{
    std::string piece_type;
    std::string color;
    std::string piece;
    if(m_color == Color::White){
        color = "W";
    } else {
        color = "B";
    }

    if(m_type == Piece_type::Pawn){
        piece_type = "P";
    } else if(m_type == Piece_type::Rook){
        piece_type = "R";
    } else if(m_type == Piece_type::Knight){
        piece_type = "K";
    } else if(m_type == Piece_type::Bishop){
        piece_type = "B";
    } else if(m_type == Piece_type::Queen){
        piece_type = "Q";
    } else {
        piece_type = "K";
    }
    piece = color + piece_type;
    return piece;
}