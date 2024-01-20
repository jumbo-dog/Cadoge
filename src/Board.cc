#include "../headers/Board.hh"

#include "../headers/utils.hh"

//------------------------------------------------------------------------------

namespace CP = ChessPiece;

//------------------------------------------------------------------------------
_2DArray<CP::PieceType, BOARD_ROW_SIZE, BOARD_COL_SIZE> Board::boardInstance{};

//------------------------------------------------------------------------------

Board::Board(){};
Board::~Board(){};

//------------------------------------------------------------------------------

_2DArray<CP::PieceType, BOARD_ROW_SIZE, BOARD_COL_SIZE> Board::GetBoardInfo() {
    return boardInstance;
}

void Board::ChageBoardInfo(
    _2DArray<CP::PieceType, BOARD_ROW_SIZE, BOARD_COL_SIZE> newBoard) {
    boardInstance = newBoard;
}

//------------------------------------------------------------------------------
