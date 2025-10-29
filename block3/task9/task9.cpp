#include <iostream> 
using namespace std;

int main() {
    bool x = false;
    bool y = true;
    bool z = false;
    bool a = x && !(z || y) || !z;
    bool b = !x || x && (y || z);
    bool c = (x || y && !z) && z;
    cout << "а) " << a << endl;
    cout << "б) " << b << endl;
    cout << "в) " << c << endl;
    return(0);
}