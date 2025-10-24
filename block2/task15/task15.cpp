#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Введите трехзначное число: ";
    cin >> number;
    

    if (number < 100 || number > 999) {
        cout << "Ошибка: число должно быть трехзначным!" << endl;
        return 1;
    }
    

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;
    
    int newNumber = units * 100 + hundreds * 10 + tens;
    
    cout << "Исходное число: " << number << endl;
    cout << "Полученное число: " << newNumber << endl;
    
    return 0;
}
