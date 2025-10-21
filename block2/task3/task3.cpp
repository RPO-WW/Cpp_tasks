#include <iostream>
using namespace std;

int main() {
    double kg;
    cout << "Ввдеите массу в килограммах: " << endl;
    cin >> kg;

    double tonn = kg / 1000;
    cout << "Тонн: " << tonn << endl;

    return(0);
}