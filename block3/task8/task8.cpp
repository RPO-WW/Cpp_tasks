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
    
    cout << "Результаты вычислений:" << endl;
    cout << "======================" << endl;
    
    bool result_a = X && !(Z || Y) || !Z;
    cout << "а) X и не (Z или Y) или не Z:" << endl;
    cout << "   Формула: X && !(Z || Y) || !Z" << endl;
    cout << "   Вычисление: " << X << " && !(" << Z << " || " << Y << ") || !" << Z << endl;
    cout << "   Z || Y = " << (Z || Y) << endl;
    cout << "   !(Z || Y) = " << !(Z || Y) << endl;
    cout << "   X && !(Z || Y) = " << (X && !(Z || Y)) << endl;
    cout << "   !Z = " << !Z << endl;
    cout << "   Результат: " << result_a << endl;
    cout << endl;
    
    bool result_b = !X || X && (Y || Z);
    cout << "б) не X или X и (Y или Z):" << endl;
    cout << "   Формула: !X || X && (Y || Z)" << endl;
    cout << "   Вычисление: !" << X << " || " << X << " && (" << Y << " || " << Z << ")" << endl;
    cout << "   !X = " << !X << endl;
    cout << "   Y || Z = " << (Y || Z) << endl;
    cout << "   X && (Y || Z) = " << (X && (Y || Z)) << endl;
    cout << "   Результат: " << result_b << endl;
    cout << endl;
    
    bool result_c = (X || Y && !Z) && Z;
    cout << "в) (X или Y и не Z) и Z:" << endl;
    cout << "   Формула: (X || Y && !Z) && Z" << endl;
    cout << "   Вычисление: (" << X << " || " << Y << " && !" << Z << ") && " << Z << endl;
    cout << "   !Z = " << !Z << endl;
    cout << "   Y && !Z = " << (Y && !Z) << endl;
    cout << "   X || (Y && !Z) = " << (X || (Y && !Z)) << endl;
    cout << "   Результат: " << result_c << endl;
    cout << endl;
    
    cout << "Итоговые результаты:" << endl;
    cout << "а) " << boolalpha << result_a << endl;
    cout << "б) " << boolalpha << result_b << endl;
    cout << "в) " << boolalpha << result_c << endl;
    
    return 0;
}