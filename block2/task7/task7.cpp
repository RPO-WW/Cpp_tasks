#include <iostream>

int main() {
    int width = 543;
    int height = 130;
    int squareSide = 130;

    int countWidth = width / squareSide;
    int countHeight = height / squareSide;

    int totalSquares = countWidth * countHeight;

    std::cout << "можно отрезать " << totalSquares << " квадратов." << std::endl;

    return 0;
}