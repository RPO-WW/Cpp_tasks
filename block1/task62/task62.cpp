#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "Введите вещественное число a: ";
    cin >> a;

    double a2 = a * a;

    double a4 = a2 * a2;

    double a8 = a4 * a4;



    cout << "а) a^4 = " << a4 << ", a^8 = " << a8 << "(3 операции)" << endl;


    double a5 = a4* a;

    double a20 = a5 * a4 * a4 * a4 * a4;

    double a10 = a5 * a5;

    double a20_correct = a10 * a10;



    cout << "б) a^5 =" << a5 << ", a^20 = " << a20_correct << " (5 операций)" << endl;

    double a17 = a5* a5 * a5 * a2;


    cout << "д) a^2 = " << a2 << ", a^5 =" << a5 << ", a^17 = " << a17 << "(6 операций)" << endl;


    return 0;




}