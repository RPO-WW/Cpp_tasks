#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double y;
    
    cout << "Введите угол часовой стрелки (0 < y ≤ 2π): ";
    cin >> y;
    
    if (y <= 0 || y > 2 * M_PI) {
        cout << "Ошибка: угол должен быть в диапазоне (0, 2π]" << endl;
        return 1;
    }
    
    cout << fixed << setprecision(4);
    cout << "\n--- Исходные данные ---" << endl;
    cout << "Угол часовой стрелки: " << y << " радиан" << endl;
    cout << "Угол часовой стрелки: " << y * 180 / M_PI << " градусов" << endl;
    

    double hours_decimal = y / (M_PI / 6);
    int full_hours = static_cast<int>(hours_decimal);
    
    cout << "\n--- Расчет часов ---" << endl;
    cout << "Десятичное значение часов: " << hours_decimal << endl;
    cout << "Полных часов: " << full_hours << endl;
    

    double remaining_angle = y - full_hours * (M_PI / 6);
    

    double minutes_decimal = remaining_angle * (360 / M_PI);
    int full_minutes = static_cast<int>(minutes_decimal);
    
    cout << "\n--- Расчет минут ---" << endl;
    cout << "Оставшийся угол: " << remaining_angle << " радиан" << endl;
    cout << "Оставшийся угол: " << remaining_angle * 180 / M_PI << " градусов" << endl;
    cout << "Десятичное значение минут: " << minutes_decimal << endl;
    cout << "Полных минут: " << full_minutes << endl;
    

    double minute_hand_angle = (full_minutes * 2 * M_PI) / 60;
    
    cout << "\n--- Результат ---" << endl;
    cout << "Угол минутной стрелки: " << minute_hand_angle << " радиан" << endl;
    cout << "Угол минутной стрелки: " << minute_hand_angle * 180 / M_PI << " градусов" << endl;
    cout << "Полных часов: " << full_hours << endl;
    cout << "Полных минут: " << full_minutes << endl;
    cout << "Время: " << full_hours << ":" << setw(2) << setfill('0') << full_minutes << endl;
    
    return 0;
}