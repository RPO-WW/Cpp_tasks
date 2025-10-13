#include <iostream>
#include <cmath>

int main() {
    double s;
    double r_b;
    double r_m;
    double pi_v = M_PI;

    std::cout << "Введите r_b" << std::endl;
    std::cin >> r_b;

    std::cout << "Введите r_m" << std::endl;
    std::cin >> r_m;

    s = pi_v * (std::pow(r_b, 2) - std::pow(r_m, 2));
    std::cout << "Площадь: " << s << std::endl;
}