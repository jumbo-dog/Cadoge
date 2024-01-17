#include "../headers/ChessPiece.hh"

PieceType ChessPiece::GetTypeOfPiece(ChessPiece piece) { return piece.type; }

PieceType ChessPiece::GetTypeOfPiece(Position pos) {
    return PieceType::ERR;  // doenst work for now. Just a template for
                            // the future
}
