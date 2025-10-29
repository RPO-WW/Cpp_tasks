#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Таблица истинности для логических выражений:\n\n";
    cout << "X\tY\tне(X или Y)\tне X и Y\tX и не Y\n";
    cout << "-----------------------------------------------------\n";
    
    for (int x_val = 0; x_val <= 1; x_val++) {
        for (int y_val = 0; y_val <= 1; y_val++) {
            bool X = x_val;
            bool Y = y_val;
            
            bool expr_a = !(X || Y);
            bool expr_b = !X && Y;
            bool expr_c = X && !Y;
            
            cout << X << "\t" << Y << "\t";
            cout << expr_a << "\t\t";
            cout << expr_b << "\t\t";
            cout << expr_c << "\n";
        }
    }
    
    return 0;
}