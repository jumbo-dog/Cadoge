#pragma once

//------------------------------------------------------------------------------

enum PieceType {
    Pawn   = 1,
    Knight = 2,
    Bishop = 3,
    Rook   = 4,
    Queen  = 5,
    King   = 6,

    ERR = 0,
};

struct Position {
        int x;
        int y;
};

//------------------------------------------------------------------------------

class ChessPiece {
    public:
        PieceType GetTypeOfPiece(ChessPiece piece);
        PieceType GetTypeOfPiece(Position pos);

    private:
        Position pos;
        PieceType type;
};

//------------------------------------------------------------------------------
