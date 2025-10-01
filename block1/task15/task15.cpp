#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x = 2.0;
    double a = 3.0;
    double b = 4.0;
    double c = 1.0;
    double m = 2.0;
    double n = 3.0;
    
    cout << fixed << setprecision(4);
    
    double result_a = -1.0 / (x * x);
    cout << "a) -1/x² = " << result_a << endl;
    
    double result_b = a / (b * c);
    cout << "б) a/(bc) = " << result_b << endl;
    
    double result_c = (a / b) * c;
    cout << "в) (a/b)c = " << result_c << endl;
    
    double result_g = (a + b) / 2.0;
    cout << "г) (a+b)/2 = " << result_g << endl;
    
    double result_d = 5.45 * (a + 2 * b) / (2 - a);
    cout << "д) 5.45*(a+2b)/(2-a) = " << result_d << endl;
    
    double discriminant = b * b - 4 * a * c;
    double result_e;
    if (discriminant >= 0) {
        result_e = (-b + sqrt(discriminant)) / (2 * a);
        cout << "е) (-b+√(b²-4ac))/(2a) = " << result_e << endl;
    } else {
        cout << "е) Дискриминант отрицательный" << endl;
    }
    
    double result_zh = (-b + 1.0 / a) / c;
    cout << "ж) (-b+1/a)/c = " << result_zh << endl;
    
    double result_z = 1.0 / (1.0 + (a + b) / 2.0);
    cout << "з) 1/(1+(a+b)/2) = " << result_z << endl;
    
    double result_i = 1.0 / (1.0 + 1.0 / (2.0 + 1.0 / (2.0 + 3.0 / 5.0)));
    cout << "и) 1/(1+1/(2+1/(2+3/5))) = " << result_i << endl;
    
    double result_k = pow(2, pow(m, n));
    cout << "к) 2^(m^n) = " << result_k << endl;
    
    return 0;
}