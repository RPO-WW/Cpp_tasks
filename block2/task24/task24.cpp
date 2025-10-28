#include <iostream>
using namespace std;

int main() {
    int num = 237;
    int itog = (num % 100) * 10 + (num / 100); 
    cout << itog << endl;
    return(0);
}