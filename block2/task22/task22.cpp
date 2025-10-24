#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Введите натуральное число (n > 99): ";
    cin >> n;
    

    if (n <= 99) {
        cout << "Ошибка: число должно быть больше 99!" << endl;
        return 1;
    }
    
    int tens = (n / 10) % 10;
    
    int hundreds = (n / 100) % 10;
    
    cout << "Исходное число: " << n << endl;
    cout << "а) Число десятков: " << tens << endl;
    cout << "б) Число сотен: " << hundreds << endl;
    
    return 0;
}
