#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    

    cout << "Введите длины катетов прямоугольного треугольника:" << endl;
    
    cout << "Первый катет: ";
    while (!(cin >> a) || a <= 0) {
        cout << "Ошибка! Введите положительное число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    
    cout << "Второй катет: ";
    while (!(cin >> b) || b <= 0) {
        cout << "Ошибка! Введите положительное число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    

    double hypotenuse = sqrt(a * a + b * b);
    

    double perimeter = a + b + hypotenuse;
    

    cout << "\nРезультаты вычислений:" << endl;
    cout << "Первый катет: " << a << endl;
    cout << "Второй катет: " << b << endl;
    cout << "Гипотенуза: " << hypotenuse << endl;
    cout << "Периметр: " << perimeter << endl;
    
    return 0;
}