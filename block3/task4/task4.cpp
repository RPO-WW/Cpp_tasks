#include <iostream>
using namespace std;

int main() {
    bool x = true;
    bool y = true;
    bool z = false;
    bool a = !x && y;
    bool b = x || !y;
    bool c = x || y && z;
    cout << "а)" << a << endl;
    cout << "б)" << b << endl;
    cout << "в)" << c << endl;
    return(0);
}
