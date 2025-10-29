#include <iostream>
using namespace std;

int main() {
  
    bool A = false;
    bool B = false;
    bool C = true;
    
   
    bool result_a = (!A || !B) && !C;
    
   
    bool result_b = (!A || !B) && (A || B);
    
   
    bool result_c = (A && B) || (A && C) || !C;
    
   
    cout << "А = " << (A ? "Истина" : "Ложь") << ", В = " << (B ? "Истина" : "Ложь") 
         << ", С = " << (C ? "Истина" : "Ложь") << endl << endl;
    
    cout << "а) (не А или не В) и не С = " << (result_a ? "Истина" : "Ложь") << endl;
    cout << "б) (не А или не В) и (А или В) = " << (result_b ? "Истина" : "Ложь") << endl;
    cout << "в) А и В или А и С или не С = " << (result_c ? "Истина" : "Ложь") << endl;
    
    return 0;
}