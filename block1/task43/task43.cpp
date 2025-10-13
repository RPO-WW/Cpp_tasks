#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    double a, b;

    std::cout << "Введите два числа: \n";
    std::cout << "Число 1:  ";
    std::cin >> a;
    std::cout << "Число 2: ";
    std::cin >> b;

    double absA = std::abs(a);
    double absB = std::abs(b);

    double arithmeticMean = (absA + absB) / 2.0;
    double geometricMean = std::sqrt(absA * absB);

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "\n Среднее арифметическое модулей: " << arithmeticMean << "\n";
    std::cout << "Среднее геометрическое модулей: " << geometricMean << "\n";

    return 0;
}
