#include <iostream>

int main() {
    int rebro;
    std::cout << "Ввдеите ребро куба" << std::endl;
    std::cin >> rebro;
    int ploshad = rebro * rebro;
    int obem = rebro * rebro * rebro;
    std::cout << "Площадь боковой поверхности: " << ploshad << std::endl;
    std::cout << "Объём куба: " << obem << std::endl;
    return(0);
}
