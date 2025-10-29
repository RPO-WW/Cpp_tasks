#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    bool X = false;
    bool Y = false;
    bool Z = true;
    
    cout << "Исходные значения:" << endl;
    cout << "X = " << boolalpha << X << endl;
    cout << "Y = " << boolalpha << Y << endl;
    cout << "Z = " << boolalpha << Z << endl;
    cout << endl;
    
    cout << "Результаты вычислений:" << endl;
    cout << "======================" << endl;
    
    // а) X или Y и не Z
    bool result_a = X || Y && !Z;
    cout << "а) X или Y и не Z:" << endl;
    cout << "   " << X << " || " << Y << " && !" << Z << " = " << result_a << endl;
    cout << "   Приоритет: !Z -> Y && !Z -> X || (Y && !Z)" << endl;
    cout << "   !" << Z << " = " << !Z << endl;
    cout << "   " << Y << " && " << !Z << " = " << (Y && !Z) << endl;
    cout << "   " << X << " || " << (Y && !Z) << " = " << result_a << endl;
    cout << endl;
    
    // б) не X и не Y
    bool result_b = !X && !Y;
    cout << "б) не X и не Y:" << endl;
    cout << "   !" << X << " && !" << Y << " = " << result_b << endl;
    cout << "   !" << X << " = " << !X << endl;
    cout << "   !" << Y << " = " << !Y << endl;
    cout << "   " << !X << " && " << !Y << " = " << result_b << endl;
    cout << endl;
    
    // в) не (X и Z) или Y
    bool result_c = !(X && Z) || Y;
    cout << "в) не (X и Z) или Y:" << endl;
    cout << "   !(" << X << " && " << Z << ") || " << Y << " = " << result_c << endl;
    cout << "   " << X << " && " << Z << " = " << (X && Z) << endl;
    cout << "   !" << (X && Z) << " = " << !(X && Z) << endl;
    cout << "   " << !(X && Z) << " || " << Y << " = " << result_c << endl;
    cout << endl;
    
    // г) X и не Y или Z
    bool result_d = X && !Y || Z;
    cout << "г) X и не Y или Z:" << endl;
    cout << "   " << X << " && !" << Y << " || " << Z << " = " << result_d << endl;
    cout << "   Приоритет: !Y -> X && !Y -> (X && !Y) || Z" << endl;
    cout << "   !" << Y << " = " << !Y << endl;
    cout << "   " << X << " && " << !Y << " = " << (X && !Y) << endl;
    cout << "   " << (X && !Y) << " || " << Z << " = " << result_d << endl;
    cout << endl;
    
    // д) X и (не Y или Z)
    bool result_e = X && (!Y || Z);
    cout << "д) X и (не Y или Z):" << endl;
    cout << "   " << X << " && (!" << Y << " || " << Z << ") = " << result_e << endl;
    cout << "   !" << Y << " = " << !Y << endl;
    cout << "   " << !Y << " || " << Z << " = " << (!Y || Z) << endl;
    cout << "   " << X << " && " << (!Y || Z) << " = " << result_e << endl;
    cout << endl;
    
    // е) X или (не (Y или Z))
    bool result_f = X || !(Y || Z);
    cout << "е) X или (не (Y или Z)):" << endl;
    cout << "   " << X << " || !(" << Y << " || " << Z << ") = " << result_f << endl;
    cout << "   " << Y << " || " << Z << " = " << (Y || Z) << endl;
    cout << "   !" << (Y || Z) << " = " << !(Y || Z) << endl;
    cout << "   " << X << " || " << !(Y || Z) << " = " << result_f << endl;
    
    return 0;
}