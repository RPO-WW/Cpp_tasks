#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int tri;
        cout << "Ввдеите трёхзначное число" << endl;
        cin >> tri;

        int tri_0 = tri / 100;
        int tri_1_2 = tri % 100;
        int itog = (tri_1_2 * 10) + tri_0;

        cout << itog << endl;
    }
    catch(exception e) {
        cerr << "Ошибка" << endl;
    }
    return(0);
}