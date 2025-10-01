#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int x;
    std::cout << "Введите число x: ";
    std::cin >> x;

    int y;
    std::cout << "Введите число y: ";
    std::cin >> y;

    int rounded = 2;

    int a;
    std::cout << "Введите число a: ";
    std::cin >> a;

    int b;
    std::cout << "Введите число b: ";
    std::cin >> b;

    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;


    int num0 = 2 * x;
    std::cout << "а)" << num0 << std::endl;

    double num1 = std::sin(x);
    std::cout << std::fixed << "б)" << std::setprecision(rounded) << num1 << std::endl;

    int num2 = std::pow(a, 2);
    std::cout << "в)" << num2 << std::endl;

    double num3 = std::pow(x, 0.5);
    std::cout << std::fixed << "г)" << std::setprecision(rounded) << num3 << std::endl;

    int num4 = std::abs(n);
    std::cout << "д)" << num4 << std::endl;

    double num5 = std::cos(y) * 5;
    std::cout << "е)" << num5 << std::endl;

    double num6_0 = std::pow(a, 2);
    double num6_1 = -7.5 * num6_0;
    std::cout << "ж)" << num6_1 << std::endl;

    double num7 = std::pow(x, 0.5) * 3;
    std::cout << std::fixed << "з)" << std::setprecision(rounded) << num7 << std::endl;

    double num8 = (std::sin(a) * std::cos(b)) + (std::cos(a) * std::sin(b));
    std::cout << std::fixed << "и)" << std::setprecision(rounded) << num8 << std::endl;

    double b_0 = b * 2;
    double num9 = std::pow(b_0, 0.5) * a;
    std::cout << std::fixed << "к)" << std::setprecision(rounded) << num9 << std::endl;

    double a_0 = a * 2;
    double b_1 = b * 3;
    double num10 = 3 * std::sin(a_0) * std::cos(b_1);
    std::cout << std::fixed << "л)" << std::setprecision(rounded) << num10 << std::endl;

    double x_0 = std::pow(y, 0.5) * x;
    double num11 = std::pow(x_0, 0.5) * -5;
    std::cout << std::fixed << "м)" << std::setprecision(rounded) << num11 << std::endl;

    return(0);
}
