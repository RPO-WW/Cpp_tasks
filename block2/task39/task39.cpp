#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Таблица истинности для логических выражений" << endl;
    cout << "X\tY\tа)\t\tб)\t\tв)" << endl;
    cout << string(50, '-') << endl;
    
    bool values[] = {false, true};
    
    for (bool x : values) {
        for (bool y : values) {
            
            bool a = !(!x || y) || !x;
            bool b = !(!x && !y) && x;
            bool c = !(x || !y) || !y;
            
            cout << boolalpha << x << "\t" << y << "\t" 
                 << a << "\t" << b << "\t" << c << endl;
        }
    }
    
    cout << "\nУпрощенные формы:" << endl;
    cout << "а) не(неX или Y) или неX = неX или неY" << endl;
    cout << "б) не(неX и неY) и X = X" << endl;
    cout << "в) не(X или неY) или неY = неX или неY" << endl;
    
    return 0;
}