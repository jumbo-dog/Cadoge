#include <array>
#include <vector>

#define BOARD_COL_SIZE 8
#define BOARD_ROW_SIZE 8

template <typename T, int C, int R>
using _2DArray = std::array<std::array<T, C>, R>;

template <typename T>
using _2DVec = std::vector<std::vector<T>>;
