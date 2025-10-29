#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << boolalpha; // Для вывода true/false вместо 1/0
    
    // а) x² + y² ≤ 0 при x = 1, y = 1
    int x = 1, y = 1;
    bool result_a = (pow(x, 2) + pow(y, 2) <= 0);
    cout << "а) x² + y² ≤ 0 при x = " << x << ", y = " << y << ": " << result_a << endl;
    
    // б) (x ≥ 2) или (y² ≠ 4) при x = 2, y = 2
    x = 2; y = 2;
    bool result_b = (x >= 2) || (pow(y, 2) != 4);
    cout << "б) (x ≥ 2) или (y² ≠ 4) при x = " << x << ", y = " << y << ": " << result_b << endl;
    
    // в) (x ≥ 0) и (y² ≠ 4) при x = 2, y = 2
    x = 2; y = 2;
    bool result_c = (x >= 0) && (pow(y, 2) != 4);
    cout << "в) (x ≥ 0) и (y² ≠ 4) при x = " << x << ", y = " << y << ": " << result_c << endl;
    
    // г) (x·y ≠ 4) и (y > x) при x = 1, y = 2
    x = 1; y = 2;
    bool result_d = (x * y != 4) && (y > x);
    cout << "г) (x·y ≠ 4) и (y > x) при x = " << x << ", y = " << y << ": " << result_d << endl;
    
    // д) (x·y ≠ 0) или (y < x) при x = 2, y = 1
    x = 2; y = 1;
    bool result_e = (x * y != 0) || (y < x);
    cout << "д) (x·y ≠ 0) или (y < x) при x = " << x << ", y = " << y << ": " << result_e << endl;
    
    // е) (не(x·y < 1)) и (y > x) при x = 1, y = 2
    x = 1; y = 2;
    bool result_f = !(x * y < 1) && (y > x);
    cout << "е) не(x·y < 1) и (y > x) при x = " << x << ", y = " << y << ": " << result_f << endl;
    
    // ж) (не(x·y < 0)) или (y > x) при x = 2, y = 1
    x = 2; y = 1;
    bool result_g = !(x * y < 0) || (y > x);
    cout << "ж) не(x·y < 0) или (y > x) при x = " << x << ", y = " << y << ": " << result_g << endl;
    
    return 0;
}