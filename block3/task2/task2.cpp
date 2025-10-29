#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    bool X = false;
    bool Y = true;
    bool Z = false;
    
    cout << "Исходные значения:" << endl;
    cout << "X = " << boolalpha << X << endl;
    cout << "Y = " << boolalpha << Y << endl;
    cout << "Z = " << boolalpha << Z << endl;
    cout << endl;
    

    bool result_a = X || Z; 
    bool result_b = X && Y;  
    bool result_c = X && Z; 
    

    cout << "Результаты вычислений:" << endl;
    cout << "а) X или Z = " << X << " || " << Z << " = " << result_a << endl;
    cout << "б) X и Y = " << X << " && " << Y << " = " << result_b << endl;
    cout << "в) X или Z = " << X << " || " << Z << " = " << result_c << endl;
    
    return 0;
}