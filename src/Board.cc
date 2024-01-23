#include "../headers/Board.hh"

#include <raylib.h>

#include <cstdlib>
#include <iostream>

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

bool Board::rl_Init() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Cadoge");

    Image img = LoadImage("./assets/whitehorse.png");
    if (img.data == NULL) {
        std::cout << "ERROR: Could not find image for chess pieces\n";
        exit(EXIT_FAILURE);
    }

    ImageResize(&img, 128, 128);
    Texture texture = LoadTextureFromImage(img);
    UnloadImage(img);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BACKGROUND_COLOR);
        for (int i = 0; i < SCREEN_WIDTH; i += 128) {
            for (int j = 0; j < SCREEN_HEIGHT; j += 128) {
                DrawRectangle(i, j, 126, 126, WHITE);
                DrawTexture(texture, i, j, RAYWHITE);
            }
        }
        EndDrawing();
    }
    UnloadTexture(texture);
    CloseWindow();

    return 0;
}

//------------------------------------------------------------------------------
