#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Введите натуральное число (n > 9): ";
    cin >> n;
    

    if (n <= 9) {
        cout << "Ошибка: число должно быть больше 9!" << endl;
        return 1;
    }
    

    int units = n % 10;
    

    int tens = (n / 10) % 10;
    
    cout << "Исходное число: " << n << endl;
    cout << "а) Число единиц: " << units << endl;
    cout << "б) Число десятков: " << tens << endl;
    
    return 0;
}