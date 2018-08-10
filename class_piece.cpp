//
// Created by Richard on 8/8/2018.
//

class Piece {
    public:
        enum class Color{
                White, Black
        };
        enum class Status{
                Alive, Dead
        };
        enum class Piece_type{
                Null, Pawn, Rook, Knight, Bishop, Queen, King
        };
        Piece(Piece_type type=Piece_type::Pawn, Color team=Color::White){
            Piece_type m_type = type;
            Color m_color = team;
            Status m_status = Status::Alive;
            Moved = false;
        }
        Piece create_piece(Piece_type type=Piece_type::Pawn, Color team=Color::White) {
            m_type = type;
            m_color = team;
            m_status = Status::Alive;
            Moved = false;
        }
    private:
        Piece_type m_type;
        Color m_color;
        Status m_status;
        bool Moved;
};
