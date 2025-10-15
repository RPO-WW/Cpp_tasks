#include <iostream>
using namespace std;

int main() {
    double V1, V2, S;
    
    
    cout << "Введите скорость первого автомобиля (км/ч): ";
    cin >> V1;
    
    cout << "Введите скорость второго автомобиля (км/ч): ";
    cin >> V2;
    
    cout << "Введите расстояние между автомобилями (км): ";
    cin >> S;
    

    if (V1 <= 0 || V2 <= 0 || S <= 0) {
        cout << "Ошибка: скорости и расстояние должны быть положительными числами!" << endl;
        return 1;
    }
    
    double relative_speed = V1 + V2;  
    double time = S / relative_speed; 
    

    cout << "Автомобили встретятся через " << time << " часов" << endl;
    cout << "Или через " << time * 60 << " минут" << endl;
    
    return 0;
}