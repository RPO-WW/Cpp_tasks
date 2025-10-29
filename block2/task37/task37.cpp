#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Ввдеите число k: " << endl;
    cin >> k;
    
    int k0 = k / 10;
    int k1 = k % 10;

    for(int i = 10; i < 100; i++) {
        cout << i;
    }
    cout << endl;
    if(k > 9 && k < 100) {
        cout << "а) " << k - 9 << endl;
        if(k0 + k1 > 9) {
            cout << "б) " << k0 + k1 - 9 << endl;
        }
        else {
            cout << "б) сумма цифр k не является двухзначным" << endl;
        }
        cout << "в) " << k - 9 << endl;
    }
    else {
        cout << "Число k не является двухзначным" << endl;
    }
    return 0;
}