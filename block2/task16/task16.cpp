#include <iostream>
#include <iomanip>
#include <cmath>
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
    
    
    double totalSeconds = h * 3600 + m * 60 + s;
    
   
    double angle = fmod(totalSeconds, 43200.0) * 360.0 / 43200.0;
    
    
    cout << "Время: " 
         << setw(2) << setfill('0') << h << ":" 
         << setw(2) << setfill('0') << m << ":" 
         << setw(2) << setfill('0') << s << endl;
    cout << fixed << setprecision(2);
    cout << "Угол часовой стрелки: " << angle << "°" << endl;
    
  
    cout << "\nДетали расчета:" << endl;
    cout << "Всего секунд: " << totalSeconds << endl;
    cout << "Секунд в 12-часовом цикле: " << fmod(totalSeconds, 43200.0) << endl;
    
    return 0;
}