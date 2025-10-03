#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    double a;
    std::cout << "Введите число a: ";
    std::cin >> a;

    double y = (std::pow(a, 2) + 10) / std::pow((std::pow(a, 2) + 1), 0.5);
    std::cout << "Число y: " << y << std::endl;
    return(0);
}
