#include <iostream>

int main() {
    int dlina;
    std::cout << "Ввдеите длину прямоугольного параллелепипеда: " << std::endl;
    std::cin >> dlina;

    int shirina;
    std::cout << "Ввдеите ширину прямоугольного параллелепипеда: " << std::endl;
    std::cin >> shirina;

    int visota;
    std::cout << "Ввдеит высоту прямоугольного параллелепипеда: " << std::endl;
    std::cin >> visota;

    int bok_side = dlina * shirina;
    int obom = dlina * shirina * visota;

    std::cout << "Площадь боковой стороны прямоугольного параллелепипеда: " << bok_side << std::endl;
    std::cout << "Объём прямоугольного параллелепипеда: " << obom << std::endl;

    return(0);
}