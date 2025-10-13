#include <iostream>
int main(){
    long long population;
    double area;
    std::cout << "Введите количество жителей";
    std::cin >> population;
    std::cout << "Введите площадь территории";
    std::cin >> area;
    if (area <= 0){
        std::cout << "Площадь территории должна быть больше нуля" <<std::endl;
        return 1;
    }
    double populationDendity = population / area;
    std::cout<<"Плотность населения" << populationDendity << "жителей на кв км" << std::endl;
    return 0;
    
    
}