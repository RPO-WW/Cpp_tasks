#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int number;
    
    cout << "Введите четырехзначное число: ";
    cin >> number;
    
    if (number < 1000 || number > 9999) {
        cout << "Ошибка: число должно быть четырехзначным!" << endl;
        return 1;
    }
    
    cout << "Исходное число: " << number << endl;
    

    int a = number / 1000;
    int b = (number / 100) % 10;
    int c = (number / 10) % 10;
    int d = number % 10;
    
    int reversed = d * 1000 + c * 100 + b * 10 + a;
    cout << "а) Число справа налево: " << reversed << endl;
    

    int swapped1 = b * 1000 + a * 100 + d * 10 + c;
    cout << "б) Перестановка 1-2 и 3-4 цифр: " << swapped1 << endl;
    

    int swapped2 = a * 1000 + c * 100 + b * 10 + d;
    cout << "в) Перестановка 2-й и 3-й цифр: " << swapped2 << endl;
    

    int swapped3_1 = c * 1000 + d * 100 + a * 10 + b;
    cout << "г) Перестановка двух первых и двух последних цифр:" << endl;
    cout << "   Способ 1 (с выделением цифр): " << swapped3_1 << endl;
    

    int firstTwo = number / 100;
    int lastTwo = number % 100;
    int swapped3_2 = lastTwo * 100 + firstTwo;
    cout << "   Способ 2 (без выделения цифр): " << swapped3_2 << endl;
    
    return 0;
}
