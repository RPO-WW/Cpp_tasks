#include <iostream>
using namespace std;

int main() {
    for (int x = 100; x <= 999; x++) {
        int a = x / 100;           // первая цифра
        int bc = x % 100;          // две последние цифры
        int result = bc * 10 + a;  // оставшееся число * 10 + первая цифра
        if (result == 564) {
            cout << "x = " << x << endl;
            break;
        }
    }
    return 0;
}