#include <array>
#include <vector>

#define SCREEN_WIDTH  1024
#define SCREEN_HEIGHT 1024

#define BOARD_COL_SIZE 8
#define BOARD_ROW_SIZE 8

#define BACKGROUND_COLOR \
    Color { 0x00, 0x00, 0x00, 0x00 }

#define FOREGROUND_COLOR

#define WHITE_PIECE_COLOR
#define BLACK_PIECE_COLOR

template <typename T, int C, int R>
using _2DArray = std::array<std::array<T, C>, R>;

template <typename T>
using _2DVec = std::vector<std::vector<T>>;
