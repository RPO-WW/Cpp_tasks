#include <iostream>
#include <cmath>

int main() {
    int radius = 6350;
    int h;
    std::cout << "Расстояние до горизонта: " << std::endl;
    std::cin >> h;
    int S = std::pow(radius + h, 2) - std::pow(radius, 2);
    std::cout << "расстояние до горизонта: " << S << std::endl;
    return(0);
}