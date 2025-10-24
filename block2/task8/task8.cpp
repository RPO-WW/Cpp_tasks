#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Введите k (1 <= k <= 365): ";
    cin >> k;

    if (k < 1 || k > 365) {
        cout << "Некорректное значение k." << endl;
        return 1;
    }

    int d0_a = (k - 1) % 7;
    int n_a = (d0_a == 6) ? 0 : d0_a + 1;

    int d0_b = (k) % 7;
    int n_b = (d0_b == 6) ? 0 : d0_b + 1;

    int d;
    cout << "Введите d (1=пн, ..., 7=вс): ";
    cin >> d;

    if (d < 1 || d > 7) {
        cout << "Некорректное значение d." << endl;
        return 1;
    }

    int d0_v = (d - 1 + k - 1) % 7;
    int n_v = (d0_v == 6) ? 0 : d0_v + 1;

    cout << "а) n = " << n_a << endl;
    cout << "б) n = " << n_b << endl;
    cout << "в) n = " << n_v << endl;

    return 0;
}