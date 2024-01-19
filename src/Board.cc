#include "../headers/Board.hh"

#include <array>

Board::Board(std::array<std::array<ChessPiece, 8>, 8> param_board)
    : boardInfo(param_board){};

std::array<std::array<ChessPiece, 8>, 8> Board::GetBoardInfo() {
    return boardInfo;
}

bool Board::rl_DisplayBoard() {
    // needs to be created with raylib
    return false;
}
