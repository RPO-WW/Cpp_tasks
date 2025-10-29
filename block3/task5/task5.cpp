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
    
   
    cout << "Результаты вычислений:" << endl;
    cout << "======================" << endl;
    
  
    bool result_a = A || B && !C;
    cout << "а) А или В и не С:" << endl;
    cout << "   " << A << " || " << B << " && !" << C << " = " << result_a << endl;
    cout << "   Приоритет: !C -> B && !C -> A || (B && !C)" << endl;
    cout << "   !" << C << " = " << !C << endl;
    cout << "   " << B << " && " << !C << " = " << (B && !C) << endl;
    cout << "   " << A << " || " << (B && !C) << " = " << result_a << endl;
    cout << endl;
    
  
    bool result_b = !A && !B;
    cout << "б) не А и не В:" << endl;
    cout << "   !" << A << " && !" << B << " = " << result_b << endl;
    cout << "   !" << A << " = " << !A << endl;
    cout << "   !" << B << " = " << !B << endl;
    cout << "   " << !A << " && " << !B << " = " << result_b << endl;
    cout << endl;
    
   
    bool result_c = !(A && C) || B;
    cout << "в) не (А и С) или В:" << endl;
    cout << "   !(" << A << " && " << C << ") || " << B << " = " << result_c << endl;
    cout << "   " << A << " && " << C << " = " << (A && C) << endl;
    cout << "   !" << (A && C) << " = " << !(A && C) << endl;
    cout << "   " << !(A && C) << " || " << B << " = " << result_c << endl;
    cout << endl;
    
  
    bool result_d = A && !B || C;
    cout << "г) А и не В или С:" << endl;
    cout << "   " << A << " && !" << B << " || " << C << " = " << result_d << endl;
    cout << "   Приоритет: !B -> A && !B -> (A && !B) || C" << endl;
    cout << "   !" << B << " = " << !B << endl;
    cout << "   " << A << " && " << !B << " = " << (A && !B) << endl;
    cout << "   " << (A && !B) << " || " << C << " = " << result_d << endl;
    cout << endl;
    

    bool result_e = A && (!B || C);
    cout << "д) А и (не В или С):" << endl;
    cout << "   " << A << " && (!" << B << " || " << C << ") = " << result_e << endl;
    cout << "   !" << B << " = " << !B << endl;
    cout << "   " << !B << " || " << C << " = " << (!B || C) << endl;
    cout << "   " << A << " && " << (!B || C) << " = " << result_e << endl;
    cout << endl;
    
 
    bool result_f = A || !(B && C);
    cout << "е) А или (не (В и С)):" << endl;
    cout << "   " << A << " || !(" << B << " && " << C << ") = " << result_f << endl;
    cout << "   " << B << " && " << C << " = " << (B && C) << endl;
    cout << "   !" << (B && C) << " = " << !(B && C) << endl;
    cout << "   " << A << " || " << !(B && C) << " = " << result_f << endl;
    
    return 0;
}