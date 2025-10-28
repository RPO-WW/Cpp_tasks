#include <iostream>
using namespace std;

int main() {
    int result_number = 654;
    
    for (int x = 100; x <= 999; x++) {
        int a = x / 100;          
        int b = (x / 10) % 10;       
        int c = x % 10;           
        
        int calculated = 100 * c + 10 * b + a;
        
        if (calculated == result_number) {
            cout << "Найдено число x = " << x << endl;
            
            // Проверка
            cout << "Проверка:" << endl;
            cout << "Исходное число: " << x << " (" << a << b << c << ")" << endl;
            cout << "Зачеркнули последнюю цифру " << c << ": получили " << (10*a + b) << endl;
            cout << "Переставили цифры: получили " << (10*b + a) << endl;
            cout << "Слева приписали " << c << ": получили " << calculated << endl;
            break;
        }
    }
    
    return 0;
}