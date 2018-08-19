//
// Created by Richard on 8/8/2018.
//

#include <iostream>

class Piece {
    private:
    enum class Color{
        White, Black
    };
    enum class Piece_type{
        Pawn, Rook, Knight, Bishop, Queen, King
    };

    Piece_type m_type;
    Color m_color;
    bool m_moved;

    public:

        Piece(Piece_type type=Piece_type::Pawn, Color team=Color::White){
            Piece_type m_type = type;
            Color m_color = team;
            m_moved = false;
        }
        Piece create_piece(Piece_type type=Piece_type::Pawn, Color team=Color::White) {
            Piece_type m_type = type;
            Color m_color = team;
            bool m_moved = false;
        }
        Piece_type get_piece_type(){
            return m_type;
        }
        Color get_piece_color(){
            return m_color;
        }
        bool has_moved(){
            return m_moved;
        }
};
