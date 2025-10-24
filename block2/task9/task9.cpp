#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите n (количество месяцев): ";
    cin >> n;


    int x = (1 + n) % 12;
    if (x == 0)
        x = 12;

    cout << "x = " << x << endl;
    return 0;
}