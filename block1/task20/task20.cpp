#include <iostream>
using namespace std;

int main() {

    int s = 14;
    int k = -3;
    int d = s + 1;
    s = d;
    k = 2 * s;

    s = 0;
    k = 30;
    d = k - 5;
    k = 2 * d;
    s = k - 100;

    std::cout << s << std::endl;
    std::cout << k << std::endl;
    std::cout << d << std::endl;
    return(0);
}