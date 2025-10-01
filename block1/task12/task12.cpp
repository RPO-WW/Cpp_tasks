#include <iostream>

int main() {
    // Объявление переменных
    int t, v, x, y;
    
    // Ввод значений с клавиатуры
    std::cout << "Введите значение t: ";
    std::cin >> t;
    
    std::cout << "Введите значение v: ";
    std::cin >> v;
    
    std::cout << "Введите значение x: ";
    std::cin >> x;
    
    std::cout << "Введите значение y: ";
    std::cin >> y;
    
    // Вывод информации
    std::cout << "\nа)" << std::endl;
    std::cout << "5 10" << std::endl;
    std::cout << "7 см" << std::endl;
    
    std::cout << "\nб)" << std::endl;
    std::cout << "100 " << t << std::endl;
    std::cout << "1949 " << v << std::endl;
    
    std::cout << "\nв)" << std::endl;
    std::cout << x << " 25" << std::endl;
    std::cout << x << " " << y << std::endl;
    
    return 0;
}