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
    

    int hundreds = number / 100;    
    int tens = (number / 10) % 10;    
    int units = number % 10;     
    

    int reversed = units * 100 + tens * 10 + hundreds;
    
    cout << "Число, полученное при прочтении цифр справа налево: " << reversed << endl;
    
    return 0;
}