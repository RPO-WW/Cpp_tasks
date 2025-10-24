#include <iostream>
using namespace std;

int main() {
    try {
        int tri;
        cout << "Ввдеите трёхзначное число" << endl;
        cin >> tri;

        if(tri < 1000 && tri > 99) {
            int tri_0 = tri / 100;
            int tri_1_2 = tri % 100;
            int itog = (tri_1_2 * 10) + tri_0;
            cout << itog << endl;
        }
        else {
            cerr << "Должно быть трёхзначное число" << endl;
        }
    }
    catch(exception e) {
        cerr << "Ошибка" << endl;
    }
    return(0);
}