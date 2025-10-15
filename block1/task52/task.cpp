#include <iostream>

int main() {
    double price_candy_per_kg, price_cookies_per_kg, price_apples_per_kg;
    double amount_candy_kg, amount_cookies_kg, amount_apples_kg;

    std::cout << "Введите стоимость 1 кг конфет: ";
    std::cin >> price_candy_per_kg;
    std::cout << "Введите стоимость 1 кг печенья: ";
    std::cin >> price_cookies_per_kg;
    std::cout << "Введите стоимость 1 кг яблок: ";
    std::cin >> price_apples_per_kg;

    std::cout << "Введите количество кг конфет (x): ";
    std::cin >> amount_candy_kg;
    std::cout << "Введите количество кг печенья (y): ";
    std::cin >> amount_cookies_kg;
    std::cout << "Введите количество кг яблок (z): ";
    std::cin >> amount_apples_kg;

    double total_cost = (price_candy_per_kg * amount_candy_kg) +
                        (price_cookies_per_kg * amount_cookies_kg) +
                        (price_apples_per_kg * amount_apples_kg);

    std::cout << "Общая стоимость покупки: " << total_cost << std::endl;

    return 0;
}
