#include <iostream>
#include <cmath>

int main() {
    double x, y;

    std::cout << "Введите возраст Тани (X): ";
    std::cin >> x;

    std::cout << "Введите возраст Мити (Y): ";
    std::cin >> y;

    double averageAge = (x + y) / 2.0;
    std::cout << "Средний возраст: " << averageAge << std::endl;

    double diffTanya = x - averageAge;
    double diffMitya = y - averageAge;

    std::cout << "Разница возраста Тани от среднего: " << std::abs(diffTanya) << std::endl;
    std::cout << "Разница возраста Мити от среднего: " << std::abs(diffMitya) << std::endl;

    return 0;
}
