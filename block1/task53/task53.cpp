#include <iostream>

int main() {
    int monitor;
    int sistem_blok;
    int klava;
    int mysh;
    int n;

    std::cout << "Ввдеите сколько стоит монитор: " << std::endl;
    std::cin >> monitor;

    std::cout << "Ввдеите сколько стоит системный блок: " << std::endl;
    std::cin >> sistem_blok;

    std::cout << "Ввдеите сколько стоит клавиатура: " << std::endl;
    std::cin >> klava;

    std::cout << "Ввдеите сколько стоит мышь: " << std::endl;
    std::cin >> mysh;

    std::cout << "Ввдеите количество: " << std::endl;
    std::cin >> n;

    int sum = monitor + sistem_blok + klava + mysh;
    int kol = sum * n;

    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Стоимость" << n << "Комплектов: " << kol <<std::endl;

    return(0);
}