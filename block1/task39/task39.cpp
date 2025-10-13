#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>

int main() {
    int rounded = 2;
    double y;
    std::cout << "Введите число y: ";
    std::cin >> y;
    double x;
    std::cout << "Введите число x: ";
    std::cin >> x;
    double z = round(x + (2 + y) / pow(x, 2) / (y + (1 / pow(pow(x, 2) + 10, 0.5))), 2);
    double q = round(2.8 * sin(x) + abs(y), 2);
}