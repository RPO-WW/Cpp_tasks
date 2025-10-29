#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double y;
    
    cout << "Введите угол поворота часовой стрелки (0 ≤ y < 360): ";
    cin >> y;
    
    if (y < 0 || y >= 360) {
        cout << "Ошибка: угол должен быть в диапазоне [0, 360)" << endl;
        return 1;
    }
    

    int hours = static_cast<int>(y / 30);
    double minutes_angle = y - hours * 30;
    int minutes = static_cast<int>(minutes_angle * 2);
    
    cout << "Угол поворота: " << y << " градусов" << endl;
    cout << "Полных часов: " << hours << endl;
    cout << "Полных минут: " << minutes << endl;
    
    cout << "\nПроверка:" << endl;
    cout << hours << " часов " << minutes << " минут" << endl;
    cout << "Это " << hours << ":" << (minutes < 10 ? "0" : "") << minutes << endl;
    
    return 0;
}