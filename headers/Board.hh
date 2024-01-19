#pragma once

//------------------------------------------------------------------------------
#include <array>

#include "./ChessPiece.hh"

class Board {
    public:
        Board(std::array<std::array<ChessPiece, 8>, 8>);
        Board();
        ~Board();

        bool rl_ChangeBoard();
        bool rl_DisplayBoard();

        std::array<std::array<ChessPiece, 8>, 8> GetBoardInfo();

    private:
        std::array<std::array<ChessPiece, 8>, 8> boardInfo;
};
//------------------------------------------------------------------------------
