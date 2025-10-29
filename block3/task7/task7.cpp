#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Заданные значения
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
    
    // а) А или не (А и В) или С
    bool result_a = A || !(A && B) || C;
    cout << "а) А или не (А и В) или С:" << endl;
    cout << "   Формула: A || !(A && B) || C" << endl;
    cout << "   Вычисление: " << A << " || !(" << A << " && " << B << ") || " << C << endl;
    cout << "   A && B = " << (A && B) << endl;
    cout << "   !(A && B) = " << !(A && B) << endl;
    cout << "   A || !(A && B) = " << (A || !(A && B)) << endl;
    cout << "   Результат: " << result_a << endl;
    cout << endl;
    
    // б) не А или А и (В или С)
    bool result_b = !A || A && (B || C);
    cout << "б) не А или А и (В или С):" << endl;
    cout << "   Формула: !A || A && (B || C)" << endl;
    cout << "   Вычисление: !" << A << " || " << A << " && (" << B << " || " << C << ")" << endl;
    cout << "   !A = " << !A << endl;
    cout << "   B || C = " << (B || C) << endl;
    cout << "   A && (B || C) = " << (A && (B || C)) << endl;
    cout << "   Результат: " << result_b << endl;
    cout << endl;
    
    // в) (А или В и не С) и С
    bool result_c = (A || B && !C) && C;
    cout << "в) (А или В и не С) и С:" << endl;
    cout << "   Формула: (A || B && !C) && C" << endl;
    cout << "   Вычисление: (" << A << " || " << B << " && !" << C << ") && " << C << endl;
    cout << "   !C = " << !C << endl;
    cout << "   B && !C = " << (B && !C) << endl;
    cout << "   A || (B && !C) = " << (A || (B && !C)) << endl;
    cout << "   Результат: " << result_c << endl;
    cout << endl;
    
    // Итоговая таблица
    cout << "Итоговые результаты:" << endl;
    cout << "а) " << boolalpha << result_a << endl;
    cout << "б) " << boolalpha << result_b << endl;
    cout << "в) " << boolalpha << result_c << endl;
    
    return 0;
}