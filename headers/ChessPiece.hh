#pragma once

//------------------------------------------------------------------------------

#include <cstdint>

#include "./Board.hh"
#include "./utils.hh"

class Board;  // For some reason I need to have this so the compiler doesn't
              // complain even tho I included it

//------------------------------------------------------------------------------

namespace ChessPiece {

enum class PieceType {
    W_Pawn = 1,
    W_Knight,
    W_Bishop,
    W_Rook,
    W_Queen,
    W_King,

    B_Pawn = 7,
    B_Knight,
    B_Bishop,
    B_Rook,
    B_Queen,
    B_King,

    EMPTY = 0,
};

struct Position {
        uint8_t x;
        uint8_t y;
};

//------------------------------------------------------------------------------

PieceType GetType(Position pos);

bool GetCapture(Position pos, Board *board);
bool MoveTo(Position prevPos, Position newPos, Board *board);

void ChangeType(PieceType newType, Position pos, const Board *board);

std::vector<Position> GetAllMovements(Position prevPos, const Board *board);

}  // namespace ChessPiece
//------------------------------------------------------------------------------
