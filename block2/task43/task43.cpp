#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Введите два целых числа a и b: ";
    cin >> a >> b;
    
    
    bool a_divides_b = (a % b == 0);
    
    
    bool b_divides_a = (b % a == 0);
    
    
    bool condition = a_divides_b || b_divides_a;
    

    int result = condition;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a делится на b: " << a_divides_b << " (остаток: " << (b != 0 ? a % b : 0) << ")" << endl;
    cout << "b делится на a: " << b_divides_a << " (остаток: " << (a != 0 ? b % a : 0) << ")" << endl;
    cout << "Результат: " << result << endl;
    
    return 0;
}