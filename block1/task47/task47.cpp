#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    

    cout << "Введите координаты первой точки (x1 y1): ";
    cin >> x1 >> y1;
    

    cout << "Введите координаты второй точки (x2 y2): ";
    cin >> x2 >> y2;
    

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    

    cout << "Координаты точек:" << endl;
    cout << "Точка A: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Точка B: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Расстояние между точками: " << distance << endl;
    return 0;
}