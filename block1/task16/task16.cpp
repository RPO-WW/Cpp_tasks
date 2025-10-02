#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 2.0;
    double b = 3.0;
    double c = 4.0;
    double x = 1.5;
    double R = 5.0;
    double d = 2.0;

    // а) a / b / c;
    double result_a = (a / b) / c;

    // б) a * b / c;
    double result_b = (a * b) / c;

    // в) a / b * c;
    double result_v = (a / b) * c;

    // г) a + b / c;
    double result_g = a + (b / c);

    // д) a + b / c;
    double result_d = a + (b / c); // То же самое, что и г)

    // е) a + b / b + c;
    double result_e = (a + (b / b)) + c;

    // ж) a + b / b + c;
    double result_zh = (a + (b / b)) + c; // То же самое, что и е)

    // з) a / sin(b);
    double result_z = a / sin(b);

    // и) 1/2 * a * b * sin(x);
    double result_i = 0.5 * a * b * sin(x);

    // к) 2 * b * c * cos(a / 2) / (b + c);
    double result_k = (2 * b * c * cos(a / 2)) / (b + c);

    // л) 4 * R * sin(a / 2) * sin(b / 2) * sin(c / 2);
    double result_l = 4 * R * sin(a / 2) * sin(b / 2) * sin(c / 2);

    // м) a * x + b / (c * x + d);
    double result_m = (a * x + b) / (c * x + d);

    // н) 2 * sin((a + b) / 2) * cos((a - b) / 2);
    double result_n = 2 * sin((a + b) / 2) * cos((a - b) / 2);

    // о) abs(2 * sin(-3 * abs(x / 2)));
    double result_o = abs(2 * sin(-3 * abs(x / 2)));
    std::cout << result_a << std::endl;
    
}

