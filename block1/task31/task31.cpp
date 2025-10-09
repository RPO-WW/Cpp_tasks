#include <cstdio>
#include <string>
#include <cmath>

int main() {
    double num1 = 50;
    double num2 = 500;

    double arifm = (num1 + num2) / 2;
    double geometr1 = (num1 * num2);
    double geometr2 = pow(geometr1, 0.5);
    printf("Арифмитическое: %f, Геометрическое: %f\n", arifm, geometr2);
    return 0;
}