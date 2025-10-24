#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int number;
    
    cout << "Введите трехзначное число с различными цифрами: ";
    cin >> number;
    
    if (number < 100 || number > 999) {
        cout << "Ошибка: число должно быть трехзначным!" << endl;
        return 1;
    }
    
    int a = number / 100;
    int b = (number / 10) % 10;
    int c = number % 10;
    
    if (a == b || a == c || b == c) {
        cout << "Ошибка: все цифры должны быть различны!" << endl;
        return 1;
    }
    
    cout << "Исходное число: " << number << endl;
    cout << "Все перестановки:" << endl;
    
    cout << a << b << c << endl;
    cout << a << c << b << endl;
    cout << b << a << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    cout << c << b << a << endl;
    
    return 0;
}