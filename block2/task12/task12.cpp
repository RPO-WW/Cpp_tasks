#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введите трехзначное число: ";
    cin >> number;
    
    if (number < 100 || number > 999) {
        cout << "Ошибка: введите трехзначное число (от 100 до 999)." << endl;
        return 1;
    }
    
    int units = number % 10;
    
    int tens = (number / 10) % 10;
    
    int hundreds = number / 100;
    int sum = hundreds + tens + units;
    
    int product = hundreds * tens * units;
    
    cout << "а) Число единиц: " << units << endl;
    cout << "б) Число десятков: " << tens << endl;
    cout << "в) Сумма цифр: " << sum << endl;
    cout << "г) Произведение цифр: " << product << endl;
    
    return 0;
}