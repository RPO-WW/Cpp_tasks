#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Введите n (100 <= n <= 999): ";
    cin >> n;
    
    if (n < 100 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне от 100 до 999" << endl;
        return 1;
    }
    
    int a = n / 100;        
    int b = (n / 10) % 10;  
    int c = n % 10;         
    

    int A = a;
    int B = c;
    int C = b;
    
    int x = 100 * A + 10 * B + C;
    
    cout << "Найдено число x = " << x << endl;
    
    cout << "\nПроверка:" << endl;
    cout << "Исходное число: " << x << " (" << A << B << C << ")" << endl;
    cout << "Зачеркнули вторую цифру " << B << ": получили " << (10*A + C) << endl;
    cout << "Справа приписали " << B << ": получили " << (100*A + 10*C + B) << endl;
    cout << "Результат: " << (100*A + 10*C + B) << " (должно быть " << n << ")" << endl;
    
    return 0;
}