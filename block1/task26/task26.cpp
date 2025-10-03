#include <iostream>

int main() {
    int radius;
    std::cout << "Введите радиус: " << std::endl;
    std::cin >> radius;
    int diametr = radius * 2;
    std::cout << "Диаметр: " << diametr << std::endl;
    return(0);
}