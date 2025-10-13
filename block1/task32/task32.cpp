#include <iostream>
#include <iomanip>

int main() {
    double mass, volume;

    std::cout << "Введите массу тела (в кг): ";
    std::cin >> mass;

    std::cout << "Введите объем тела (в м^3): ";
    std::cin >> volume;

    if (volume <= 0) {
        std::cerr << "Ошибка: объем должен быть положительным числом" << std::endl;
        return 1;
    }

    double density = mass / volume;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Плотность материала: " << density << "кг/м^3" << std::endl;

    return 0;
}