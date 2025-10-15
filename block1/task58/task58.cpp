#include <iostream>
using namespace std;

int main() {
    double fahrenheit = 450.0;
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    
    cout << "450 градусов по Фаренгейту = " << celsius << " градусов по Цельсию" << endl;
    
    return 0;
}