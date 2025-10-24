#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Введите натуральное число (n > 999): ";
    cin >> n;
    
    if (n <= 999) {
        cout << "Ошибка: число должно быть больше 999!" << endl;
        return 1;
    }
    
    int hundreds = (n / 100) % 10;
    
    int thousands = (n / 1000) % 10;
    
    cout << "Исходное число: " << n << endl;
    cout << "а) Число сотен: " << hundreds << endl;
    cout << "б) Число тысяч: " << thousands << endl;
    
    return 0;
}