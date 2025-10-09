#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846;

double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    
    cout << "Введите радиус окружности: ";
    cin >> radius;
    
    if(radius > 0){
        double circumference = calculateCircumference(radius);
        double area = calculateArea(radius);
        
        cout << "Длина окружности равна: " << circumference << endl;
        cout << "Площадь круга равна: " << area << endl;
    }
    else{
        cout << "Радиус должен быть положительным числом." << endl;
    }
    
    return 0;
}