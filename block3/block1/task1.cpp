#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    bool A = true;
    bool B = false;
    bool C = false;
    
    cout << "Исходные значения:" << endl;
    cout << "A = " << boolalpha << A << endl;
    cout << "B = " << boolalpha << B << endl;
    cout << "C = " << boolalpha << C << endl;
    cout << endl;
    

    bool result_a = A || B; 
    bool result_b = A && B;  
    bool result_c = B || C; 
    

    cout << "Результаты вычислений:" << endl;
    cout << "а) А или В = " << A << " || " << B << " = " << result_a << endl;
    cout << "б) А и В = " << A << " && " << B << " = " << result_b << endl;
    cout << "в) В или С = " << B << " || " << C << " = " << result_c << endl;
    
    return 0;
}