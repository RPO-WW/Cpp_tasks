#include <iostream>
using namespace std;

int main() {
    int a3, a2, a1, b2, b1;
    
    cout << "Введите цифры трехзначного числа (сотни a3, десятки a2, единицы a1): ";
    cin >> a3 >> a2 >> a1;
    cout << "Введите цифры двузначного числа (десятки b2, единицы b1): ";
    cin >> b2 >> b1;
    

    if (a3 < 1 || a3 > 9 || a2 < 0 || a2 > 9 || a1 < 0 || a1 > 9 || 
        b2 < 1 || b2 > 9 || b1 < 0 || b1 > 9) {
        cout << "Ошибка: цифры единиц должны быть 0-9, десятков 1-9, сотен 1-9" << endl;
        return 1;
    }
    

    int sum_units = a1 + b1;
    int result_units = sum_units % 10;
    int carry_to_tens = sum_units / 10;
    int sum_tens = a2 + b2 + carry_to_tens;
    int result_tens = sum_tens % 10;
    int carry_to_hundreds = sum_tens / 10;
    int result_hundreds = a3 + carry_to_hundreds;
    
    cout << "\nРезультат:" << endl;
    cout << "Цифра сотен: " << result_hundreds << endl;
    cout << "Цифра десятков: " << result_tens << endl;
    cout << "Цифра единиц: " << result_units << endl;
    cout << "Число: " << result_hundreds << result_tens << result_units << endl;
    
    return 0;
}