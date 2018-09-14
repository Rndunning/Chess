//
// Created by Richard on 9/14/2018.
//

#ifndef CHESS_CHESS_CLASS_PIECE_H
#define CHESS_CHESS_CLASS_PIECE_H

#endif //CHESS_CHESS_CLASS_PIECE_H

#ifndef STRING
#define STRING
#include <string>
#endif

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
    public:
        Piece();
        ~Piece();
        void set_piece_type(Piece_type new_type) { m_type = new_type; }
        void set_color(Color new_color) { m_color = new_color;}
        void set_moved(bool has_moved) { m_moved = has_moved; }
        Piece_type get_piece_type(void) { return m_type; }
        Color get_piece_color(void) { return m_color;}
        bool moved(void) { return m_moved; }
        std::string get_piece_string(void);
};
