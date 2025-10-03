#include <iostream>

int main() {
    int storona;
    std::cout << "Введите сторону квадрата: " << std::endl;
    std::cin >> storona;
    int perimetr = storona * 4;
    std::cout << "Периметр квадрата: " << perimetr << std::endl;
    return(0);
}