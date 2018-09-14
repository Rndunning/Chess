//
// Created by Richard on 9/5/2018.
//

#include <string>

class Piece
{
    public:
        enum class Color{
                White, Black
        };
        enum class Piece_type{
                Pawn, Rook, Knight, Bishop, Queen, King
        };

    private:
        Piece_type m_type;
        Color m_color;
        bool m_moved;
        std::string m_string;
    public:
        Piece(Piece_type type=Piece_type::Pawn, Color team=Color::White)
        {
            Piece_type m_type = type;
            Color m_color = team;
            m_moved = false;
        }
        void set_piece_type(Piece_type new_type) { m_type = new_type; }
        Piece_type get_piece_type() { return m_type; }
        void set_color(Color new_color) { m_color = new_color; }
        Color get_piece_color() { return m_color; }
        bool has_moved() { return m_moved; }
        std::string get_piece_string(void)
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
};

