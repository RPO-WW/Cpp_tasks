#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите n (1 <= n <= 999): ";
    cin >> n;
    
    if (n < 1 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне от 1 до 999" << endl;
        return 1;
    }
    
    bool found = false;
    
    // Перебираем все трехзначные числа
    for (int x = 100; x <= 999; x++) {
        int first_digit = x / 100;           // первая цифра
        int last_two_digits = x % 100;       // две последние цифры
        
        // Вычисляем результат по условию задачи
        int result = last_two_digits * 10 + first_digit;
        
        if (result == n) {
            cout << "Найдено число x = " << x << endl;
            found = true;
            
            // Проверка (можно закомментировать)
            cout << "Проверка: зачеркнули первую цифру " << first_digit 
                 << ", получили " << last_two_digits << endl;
            cout << "Умножили на 10: " << last_two_digits * 10 << endl;
            cout << "Прибавили первую цифру: " << last_two_digits * 10 
                 << " + " << first_digit << " = " << n << endl << endl;
        }
    }
    
    if (!found) {
        cout << "Для n = " << n << " трехзначное число x не найдено" << endl;
    }
    
    return 0;
}
