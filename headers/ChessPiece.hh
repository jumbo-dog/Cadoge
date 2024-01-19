#pragma once

//------------------------------------------------------------------------------

#include <array>
#include <cstdint>

//------------------------------------------------------------------------------

enum PieceType {
    Pawn = 1,
    Knight,
    Bishop,
    Rook,
    Queen,
    King,

    EMPTY = 0,
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
        ChessPiece(PieceType type);
        ~ChessPiece();

        bool Display();
        bool Capture();

        PieceType GetType();
        Position GetPos();

    private:
        Position pos;
        PieceType type;
        bool isCaptured = false;
};

//------------------------------------------------------------------------------
