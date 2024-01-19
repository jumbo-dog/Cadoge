#include "../headers/ChessPiece.hh"

//------------------------------------------------------------------------------

ChessPiece::ChessPiece(PieceType param_type) : type(param_type){};

ChessPiece::~ChessPiece() {}

//------------------------------------------------------------------------------

bool ChessPiece::Display() { return false; }

bool ChessPiece::Capture() { return false; }
bool Capture(Position pos) { return false; };

PieceType ChessPiece::GetType() { return type; }
PieceType GetType(Position pos) { return EMPTY; }  // Just a placeholder

Position ChessPiece::GetPos() { return pos; };

//------------------------------------------------------------------------------
