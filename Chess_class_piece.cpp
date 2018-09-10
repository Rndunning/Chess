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
        Piece(char t='P', char c='w'){};
        Piece_type get_piece_type()
        {
            return m_type;
        }
        Color get_piece_color()
        {
            return m_color;
        }
        bool has_moved()
        {
            return m_moved;
        }
        void get_piece_string(std::string &piece)
        {
            std::string piece_type;
            std::string color;

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
            return;
        }
};