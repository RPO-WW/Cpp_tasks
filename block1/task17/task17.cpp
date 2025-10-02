#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int x1;
    std::cout << "Введите число x1: ";
    std::cin >> x1;

    int x2;
    std::cout << "Введите число x2: ";
    std::cin >> x2;
    
    int x3;
    std::cout << "Введите число x3: ";
    std::cin >> x3;

    int v0;
    std::cout << "Введите число v0: ";
    std::cin >> v0;

    int a;
    std::cout << "Введите число a: ";
    std::cin >> a;

    int t;
    std::cout << "Введите число t: ";
    std::cin >> t;

    int m1;
    std::cout << "Введите число m1: ";
    std::cin >> m1;

    int h;
    std::cout << "Введите число h: ";
    std::cin >> h;

    int g = 10;

    int r1;
    std::cout << "Введите число r1: ";
    std::cin >> r1;

    int r2;
    std::cout << "Введите число r2: ";
    std::cin >> r2;

    int b;
    std::cout << "Введите число b: ";
    std::cin >> b;

    int c;
    std::cout << "Введите число c: ";
    std::cin >> c;

    int m2;
    std::cout << "Введите число m2: ";
    std::cin >> m2;

    int y;
    std::cout << "Введите число y: ";
    std::cin >> y;

    int i;
    std::cout << "Введите число i: ";
    std::cin >> i;

    int d;
    std::cout << "Введите число d: ";
    std::cin >> d;

    int rounded = 2;

    double pi = M_PI;

    double x1_2 = std::pow(x1, 2);
    double x1_2_2 = std::pow(x2, 2) + x1_2;
    double num0 = std::pow(x1_2_2, 0.5);
    std::cout << std::fixed << "a)" << std::setprecision(rounded) << num0 << std::endl;

    int num1 = (x1 * x2) + (x1 * x3) + (x2 * x3);
    std::cout << std::fixed << "б)" << std::setprecision(rounded) << num1 << std::endl;

    double num2 = (v0 * t) + ((a * std::pow(t, 2)) / 2);
    std::cout << std::fixed << "в)" << std::setprecision(rounded) << num2 << std::endl;

    double num3 = (m1 * std::pow(v0, 2)) / 2 + (m1 * g * h);
    std::cout << std::fixed << "г)" << std::setprecision(rounded) << num3 << std::endl;

    double num4 = (1 / r1) + (1 / r2);
    std::cout << std::fixed << "д)" << std::setprecision(rounded) << num4 << std::endl;

    double num5 = m1 * g * std::cos(a);
    std::cout << std::fixed << "е)" << std::setprecision(rounded) << num5 << std::endl;

    double num6 = 2 * pi * r1;
    std::cout << std::fixed << "ж)" << std::setprecision(rounded) << num6 << std::endl;

    int num7 = std::pow(b, 2) - (4 * a * c);
    std::cout << std::fixed << "з)" << std::setprecision(rounded) << num7 << std::endl;

    double num8 = y * ((m1 * m2) / std::pow(r1, 2));
    std::cout << std::fixed << "и)" << std::setprecision(rounded) << num8 << std::endl;

    int num9 = std::pow(i, 2) * r1;
    std::cout << std::fixed << "к)" << std::setprecision(rounded) << num9 << std::endl;

    double num10 = a * b * std::sin(c);
    std::cout << std::fixed << "л)" << std::setprecision(rounded) << num10 << std::endl;

    double num11_0 = std::pow(a, 2) + std::pow(b, 2) - (2 * a * b * std::sin(c));
    double num11_1 = std::pow(num11_0, 0.5);
    std::cout << std::fixed << "м)" << std::setprecision(rounded) << num11_1 << std::endl;

    double num12 = ((a * d) + (b * c)) / (a * d);
    std::cout << std::fixed << "н)" << std::setprecision(rounded) << num12 << std::endl;

    double num13 = std::pow((1 - std::pow(std::sin(x1), 2)), 0.5);
    std::cout << std::fixed << "о)" << std::setprecision(rounded) << num13 << std::endl;

    double num14 = 1 / (std::pow(((a * std::pow(x1 , 2)) + (b * x1) + c), 0.5));
    std::cout << std::fixed << "п)" << std::setprecision(rounded) << num14 << std::endl;

    double num15 = (std::pow((x1 + 1), 0.5) + std::pow((x1 - 1), 0.5)) / (2 * std::pow(x1, 0.5));
    std::cout << std::fixed << "р)" << std::setprecision(rounded) << num15 << std::endl;

    int num16 = std::abs(x1) + std::abs(x1 + 1) ;
    std::cout << std::fixed << "с)" << std::setprecision(rounded) << num16 << std::endl;

    int num17 =  std::abs(1 - std::abs(x1));
    std::cout << std::fixed << "т)" << std::setprecision(rounded) << num17 << std::endl;

    return(0);
}
