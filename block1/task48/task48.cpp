#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a,b,h;
    double perimetr;
    cout << "Введите длину большего основания трапеции: ";
    cin >> a;
    cout << "Введите длину меньшего основания трапеции: ";
    cin >> b;
    cout << "Введите высоту трапеции: ";
    cin >> h;
    if (a <= 0 || b <= 0 || h <= 0){
        cout << "Ошибка значения должны быть положительными";
    }
    if ( a < b){
        swap(a,b);
    }
    double side = sqrt(static_cast<double>(((a - b)/ 2) * ((a - b) / 2)) + h * h);
    perimetr = a + b + 2 * side;
    cout << "Периметр равен: " << perimetr << endl;
    cout << "Длина боковой стороны: " << side << endl;
    return 0;

}