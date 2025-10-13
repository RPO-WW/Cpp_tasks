#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, h;

    std::cout << "Введите длину первого основания (a): ";
    std::cin >> a;
    std::cout << "Введите длину второго основания (b): ";
    std::cin >> b;
    std::cout << "Введите высоту трапеции (h): ";
    std::cin >> h;

    double diff_base_half = std::abs(a - b) / 2.0;


    double c = std::sqrt(h * h + diff_base_half * diff_base_half);


    double perimeter = a + b + 2 * c;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Периметр равнобедренной трапеции: " << perimeter << std::endl;

    return 0;
}
