#include <iostream>
using namespace std;

int main() {
    double metr;
    cout << "Введите расстояние в метрах" << endl;
    cin >> metr;

    double km = metr / 1000;
    cout << "Километров: " << km << endl;

    return(0);
}