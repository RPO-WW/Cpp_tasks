#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Таблица истинности логических выражений" << endl;
    cout << "=======================================" << endl;
    
    
    cout << "|  A  |  B  | не (А и В) | не А или В | А или не В |" << endl;
    cout << "|-----|-----|------------|------------|------------|" << endl;
    
  
    bool values[] = { false, true };
    
    for (bool A : values) {
        for (bool B : values) {
            
            bool result_a = !(A && B);
            
            
            bool result_b = !A || B;
            
            
            bool result_c = A || !B;
            
          
            cout << "| " << setw(3) << boolalpha << A << " | " 
                 << setw(3) << B << " | " 
                 << setw(10) << result_a << " | " 
                 << setw(10) << result_b << " | " 
                 << setw(10) << result_c << " |" << endl;
        }
    }
    
    
    cout << "\nАнализ выражений:" << endl;
    cout << "а) не (А и В) - отрицание конъюнкции (штрих Шеффера)" << endl;
    cout << "б) не А или В - импликация (A → B)" << endl;
    cout << "в) А или не В - обратная импликация (B → A)" << endl;
    
    return 0;
}