#include <iostream>
using namespace std;

int main() {
    int a2, a1, b2, b1;
    
    cout << "Введите цифры двух двузначных чисел:" << endl;
    cout << "Первое число - a2 a1: "; cin >> a2 >> a1;
    cout << "Второе число - b2 b1: "; cin >> b2 >> b1;
    

    int units_sum = a1 + b1;
    

    int result_units = units_sum % 10;
    int carry_to_tens = units_sum / 10;
    
    int tens_sum = a2 + b2 + carry_to_tens;
    

    int result_tens = tens_sum;
    
    cout << "\nВычисления:" << endl;
    cout << "Сумма единиц: " << a1 << " + " << b1 << " = " << units_sum << endl;
    cout << "Цифра единиц результата: " << units_sum << " % 10 = " << result_units << endl;
    cout << "Перенос в десятки: " << units_sum << " / 10 = " << carry_to_tens << endl;
    cout << "Сумма десятков: " << a2 << " + " << b2 << " + " << carry_to_tens 
         << " = " << tens_sum << endl;
    
    cout << "\nЦифры результата:" << endl;
    cout << "Десятки: " << result_tens << endl;
    cout << "Единицы: " << result_units << endl;
    cout << "Число: " << result_tens << result_units << endl;
    
    return 0;
}