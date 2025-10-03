#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int rounded = 2;
    double a;
    std::cout << "Введите число a: ";
    std::cin >> a;
    double x;
    std::cout << "Введите число x: ";
    std::cin >> x;
    double x1 = std::pow((2 * a + (std::sin(std::abs(3 * a))) / 3.56), 0.5);
    std::cout << std::fixed << "a" << std::setprecision(rounded) << x1 << std::endl;
    double y = std::sin(3.2 + std::pow((1 + x), 0.5) / std::abs(5 * x));
    std::cout << std::fixed << "b" << std::setprecision(rounded) << y << std::endl;
    round(0);


}