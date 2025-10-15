#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, angle_degrees;
    const double PI = 3.14159265358979323846;

    std::cout << "Введите большее основание a: ";
    std::cin >> a;
    std::cout << "Введите меньшее основание b: ";
    std::cin >> b;
    std::cout << "Введите угол при большем основании: ";
    std::cin >> angle_degrees;

    double angle_degrees = angle_degrees * PI / 180;

    double h = ((a - b) / 2) * tan(angle_degrees);

    double area = (a + b) / 2 * h;

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Площадь трапеции: " << area << std::endl;

}