#include "../headers/ChessPiece.hh"

#include "../headers/Board.hh"
#include "../headers/utils.hh"

//------------------------------------------------------------------------------

ChessPiece::PieceType ChessPiece::GetType(Position pos) {
    return PieceType::EMPTY;
}

void ChessPiece::ChangeType(PieceType newType,
                            Position pos,
                            const Board *board) {
    Board _board = *board;
    _2DArray<CP::PieceType, BOARD_ROW_SIZE, BOARD_COL_SIZE> boardInfo =
        _board.GetBoardInfo();

    boardInfo[pos.x][pos.y] = newType;
}

bool ChessPiece::GetCapture(Position pos, Board *board) { return false; };

bool ChessPiece::MoveTo(const Position piecePos,
                        const Position newPos,
                        Board *board) {
    return false;
}

std::vector<ChessPiece::Position> ChessPiece::GetAllMovements(
    Position prevPos, const Board *board) {
    std::vector<CP::Position> movements{};
    return movements;
}

//------------------------------------------------------------------------------
