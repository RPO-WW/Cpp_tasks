#include <iostream>

int main() {
    int n;
    std::cout << "Введите натуральное число n (n < 9999): ";
    std::cin >> n;

    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    if (d1 == d2 || d1 == d3 || d1 == d4 || d2 == d3 || d2 == d4 || d3 == d4) {
        std::cout << "Цифры числа не различны." << std::endl;
    } else {
        std::cout << "Все цифры числа различны." << std::endl;
    }

    return 0;
}
// НОМЕР ТАКОЙ ЗАДАЧИ НЕ СУЩЕСТВУЕТ!!!