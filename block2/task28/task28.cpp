#include <iostream>
using namespace std;

int main() {
    int result_number = 546;
    
    for (int x = 100; x <= 999; x++) {
        int a = x / 100;
        int b = (x / 10) % 10;
        int c = x % 10;
        
        int calculated = 100 * b + 10 * a + c;
        
        if (calculated == result_number) {
            cout << "Найдено число x = " << x << endl;
            
            cout << "Проверка:" << endl;
            cout << "Исходное число: " << x << " (" << a << b << c << ")" << endl;
            cout << "Зачеркнули вторую цифру " << b << ": получили " << (10*a + c) << endl;
            cout << "Слева приписали " << b << ": получили " << calculated << endl;
            break;
        }
    }
    
    return 0;
}