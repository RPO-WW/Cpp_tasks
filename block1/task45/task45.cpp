#include <iostream>

int main() {
    double num1, num2;

    // Получаем два числа от пользователя
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    // Проверяем, чтобы второе число не было нулем, чтобы избежать деления на ноль
    if (num2 != 0) {
        // Вычисляем и выводим результаты
        std::cout << "Сумма: " << num1 + num2 << std::endl;
        std::cout << "Разность: " << num1 - num2 << std::endl;
        std::cout << "Произведение: " << num1 * num2 << std::endl;
        std::cout << "Частное: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Ошибка: деление на ноль невозможно." << std::endl;
    }

    return 0;
}
