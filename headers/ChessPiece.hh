#pragma once

//------------------------------------------------------------------------------

#include <cstdint>

//------------------------------------------------------------------------------

enum PieceType {
    Pawn   = 1,
    Knight = 2,
    Bishop = 3,
    Rook   = 4,
    Queen  = 5,
    King   = 6,

    EMPTY = -1,
};

struct Position {
        uint8_t x;
        uint8_t y;
};

//------------------------------------------------------------------------------

PieceType GetType(Position pos);
bool Capture(Position pos);

//------------------------------------------------------------------------------

class ChessPiece {
    public:
        ChessPiece(Position pos, PieceType type);
        ~ChessPiece();

        bool DisplayPiece();
        bool Capture();

        PieceType GetType();
        Position GetPos();

    private:
        Position pos;
        PieceType type;
        bool isCaptured = false;
};

//------------------------------------------------------------------------------
