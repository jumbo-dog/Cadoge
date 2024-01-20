#pragma once

//------------------------------------------------------------------------------

#include "./ChessPiece.hh"
#include "./utils.hh"

//------------------------------------------------------------------------------

namespace ChessPiece {
enum class PieceType;
};  // namespace ChessPiece

// For some reason i need to do this so the compiler doesn't complain even tho I
// included it

namespace CP = ChessPiece;

class Board {
    public:
        Board(
            _2DArray<CP::PieceType, (int)BOARD_ROW_SIZE, (int)BOARD_COL_SIZE>);
        Board();
        ~Board();

        bool rl_UpdateBoard();
        bool rl_Init();

        void ChageBoardInfo(
            _2DArray<CP::PieceType, (int)BOARD_ROW_SIZE, (int)BOARD_COL_SIZE>);

        _2DArray<CP::PieceType, (int)BOARD_ROW_SIZE, (int)BOARD_COL_SIZE>
        GetBoardInfo();

    private:
        static _2DArray<CP::PieceType, (int)BOARD_ROW_SIZE, (int)BOARD_COL_SIZE>
            boardInstance;
        // Use this insted of creating a new board
};

//------------------------------------------------------------------------------
