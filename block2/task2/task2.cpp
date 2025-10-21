#include <iostream>
int main(){
    double kilo;
    std::cout << "Введите массу в кг";
    std::cin >> kilo;
    if (kilo < 0 ){
        std::cout <<"Масса не может быть отрицательной" << std::endl;
        return 1;
    }
int full_centners = static_cast<int>(kilo / 100);
std::cout<<"Количество полных центнеров: " << full_centners << std::endl;
return 0;
}