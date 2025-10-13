#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cout << "Введите длины катетов a и b: ";
    std::cin >> a >> b;

    if (a <= 0 || b <= 0) {
        std::cout << "Катеты должны быть положительными числами.\n";
        return 1;
    }

    double c = std::sqrt(a * a + b * b);
    std::cout << "Гипотенуза: " << c << std::endl;

    return 0;
}
