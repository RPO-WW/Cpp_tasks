#include <iostream>

using namespace std;

int main() {
    int sm;
    cout << "Введите расстояиние в сантиметрах: " << endl;
    cin >> sm;

    int m = sm / 100;
    cout << "Метров: " << m << endl;

}