#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Введите трехзначное число: ";
    cin >> number;
    
    // Проверяем, что число трехзначное
    if (number < 100 || number > 999) {
        cout << "Ошибка: число должно быть трехзначным!" << endl;
        return 1;
    }
    
    // Разделяем число на цифры
    int hundreds = number / 100;        // первая цифра (сотни)
    int tens = (number / 10) % 10;      // вторая цифра (десятки)
    int units = number % 10;            // третья цифра (единицы)
    
    // Формируем новое число, меняя вторую и третью цифры местами
    int newNumber = hundreds * 100 + units * 10 + tens;
    
    cout << "Исходное число: " << number << endl;
    cout << "Число после перестановки: " << newNumber << endl;
    
    return 0;
}
