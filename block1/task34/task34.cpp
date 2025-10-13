#include <iostream>
#include <limits>

int main() {
    double a, b;

    std::cout << "Введите коэффициент a: ";
    std::cin >> a;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Введите коэффициент b: ";
    std::cin >> b;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (a != 0) {
        double x = -b / a;
        std::cout << "Решение: x = " << x << std::endl;
    } else {
        if (b != 0) {
            std::cout << "Уравнение не имеет решений (так как a=0, b!=0)." << std::endl;
        } else {
            std::cout << "Уравнение имеет бесконечно много решений (так как a=0, b=0)." << std::endl;
        }
    }

    return 0;
}

