#include <iostream>

int main() {
    int c;
    std::cout << "Введите температуру в цельсиях" << std::endl;
    std::cin >> c;

    double f = c * 1.8 + 32;
    double k = c + 273.15;

    std::cout << "Температура в фаренгейтах: " << f << std::endl;
    std::cout << "Температура в кельвинах" << k << std::endl;

    return(0);
}