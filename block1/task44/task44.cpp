#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Введите первое число: ";
    cin >> num1;
    
    cout << "Введите второе число: ";
    cin >> num2;
    
    cout << "Сумма: " << num1 + num2 << endl;
    cout << "Разность: " << num1 - num2 << endl;
    cout << "Произведение: " << num1 * num2 << endl;
    
    if (num2 != 0) {
        cout << "Частное: " << num1 / num2 << endl;
    } else {
        cout << "Частное: деление на ноль невозможно!" << endl;
    }
    
    return 0;
}