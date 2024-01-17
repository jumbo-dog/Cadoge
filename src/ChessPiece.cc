#include "../headers/ChessPiece.hh"

//------------------------------------------------------------------------------

ChessPiece::ChessPiece(Position param_pos, PieceType param_type)
    : pos(param_pos), type(param_type){};

ChessPiece::~ChessPiece() {}

//------------------------------------------------------------------------------

bool ChessPiece::DisplayPiece() { return false; }

bool ChessPiece::Capture() { return false; }
bool Capture(Position pos) { return false; };

PieceType ChessPiece::GetType() { return type; }
PieceType GetType(Position pos) { return EMPTY; }  // Just a placeholder

Position ChessPiece::GetPos() { return pos; };
//------------------------------------------------------------------------------
