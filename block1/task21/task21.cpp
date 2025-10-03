#include <iostream>
using namespace std;

int main() {

    double a = 5.8;
    double b = -7.9;
    b = a;
    a = b;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    a = 0;
    b = -9.99;
    b = a;
    a = b;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return(0);
}