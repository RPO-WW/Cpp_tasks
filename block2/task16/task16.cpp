#include <iostream>
#include <iomanip>
#include <cmath>  // Добавляем для fmod
using namespace std;

int main() {
    int h, m, s;
    
    cout << "Введите часы (0 < h ≤ 23): ";
    cin >> h;
    
    cout << "Введите минуты (0 ≤ m ≤ 59): ";
    cin >> m;
    
    cout << "Введите секунды (0 ≤ s ≤ 59): ";
    cin >> s;
    
    if (h <= 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
        cout << "Ошибка: некорректный ввод времени!" << endl;
        return 1;
    }
    
    int hours12 = h % 12;
    double angle = hours12 * 30 + m * 0.5 + s * (0.5 / 60);
    
    // Используем fmod с <cmath>
    angle = fmod(angle, 360.0);
    
    cout << "Время: " 
         << setw(2) << setfill('0') << h << ":" 
         << setw(2) << setfill('0') << m << ":" 
         << setw(2) << setfill('0') << s << endl;
    cout << fixed << setprecision(2);
    cout << "Угол часовой стрелки: " << angle << "°" << endl;
    
    return 0;
}