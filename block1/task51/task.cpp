#include <iostream>
#include <cmath> // Для использования функции fabs

// Структура для представления точки
struct Point {
    double x;
    double y;
};

// Функция для вычисления площади треугольника по координатам вершин
double calculateTriangleArea(Point p1, Point p2, Point p3) {
    return 0.5 * std::fabs(p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y));
}

int main() {
    // Координаты вершин четырехугольника
    Point A = {0, 0};
    Point B = {4, 0};
    Point C = {3, 3};
    Point D = {1, 2};

    // Вычисление площади первого треугольника (ABC)
    double areaABC = calculateTriangleArea(A, B, C);

    // Вычисление площади второго треугольника (ADC)
    double areaADC = calculateTriangleArea(A, D, C);

    // Суммарная площадь четырехугольника
    double quadrilateralArea = areaABC + areaADC;

    std::cout << "Площадь четырехугольника: " << quadrilateralArea << std::endl;

    return 0;
}
