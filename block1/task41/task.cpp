#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double e,f,g,h;
    double a,b,c;
    cout << "Введите значение e,f,g,h";
    cin >> e >> f >> g >> h ;
    if ( f == 0){
        cout << "Ошибка f не может быть 0" << endl;
        return 1;
    }
    if (e * f == 3){
        cout << "Ошибка деление на 0 " << endl;
        return 1;
    }
    double temp = e - 3.0 / f;
    a = sqrt(pow(fabs(temp), 3) + g);
    b = sin(e) + pow(cos(h),2 );
    c = (33.0 * g) / (e * f - 3.0);
    cout << fixed << setprecision(6);
    cout << "\nРезультаты расчетов" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}