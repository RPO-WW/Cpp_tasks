#include <iostream>
using namespace std;

int main() {
    int a2, a1, b;
    
    cout << "Введите цифры двузначного числа (десятки a2, единицы a1): ";
    cin >> a2 >> a1;
    cout << "Введите однозначное число b: ";
    cin >> b;
    
    if (a2 < 1 || a2 > 9 || a1 < 0 || a1 > 9 || b < 0 || b > 9) {
        cout << "Ошибка: цифры должны быть в диапазоне 0-9, а десятки 1-9" << endl;
        return 1;
    }
    
    int sum_units = a1 + b;
    
    int result_units = sum_units % 10;
    
    int carry = sum_units / 10;
    
    int sum_tens = a2 + carry;
    
    int result_tens = sum_tens;
    
    cout << "\nРезультат:" << endl;
    cout << "Цифра десятков: " << result_tens << endl;
    cout << "Цифра единиц: " << result_units << endl;
    cout << "Число: " << result_tens << result_units << endl;
    
    return 0;
}