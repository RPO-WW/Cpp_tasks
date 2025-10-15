#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    

    cout << "Введите координаты первой вершины (x1 y1): ";
    cin >> x1 >> y1;
    
    cout << "Введите координаты второй вершины (x2 y2): ";
    cin >> x2 >> y2;
    
    cout << "Введите координаты третьей вершины (x3 y3): ";
    cin >> x3 >> y3;
    

    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);
    

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ошибка: Треугольник с такими координатами не существует!" << endl;
        return 1;
    }
    

    double perimeter = a + b + c;
    double area = triangleArea(a, b, c);
    

    cout << fixed << setprecision(2);
    cout << "\nРезультаты:" << endl;
    cout << "Длины сторон: " << a << ", " << b << ", " << c << endl;
    cout << "Периметр треугольника: " << perimeter << endl;
    cout << "Площадь треугольника: " << area << endl;
    
    return 0;
}
