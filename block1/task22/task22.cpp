#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cout << "Введите значение x: ";
    cin >> x;

    double y = 7 * x * x - 3 * x + 6;
    cout << "При x = " << x << ", y = " << y << endl << endl;

    double a;
    cout << "Введите значение a: ";
    cin >> a;

    double x_result = 12 * a * a + 7 * a - 16;
    cout << "При a = " << a << ", x = " << x_result << endl;

    return 0;
}