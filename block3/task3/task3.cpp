#include <iostream>
using namespace std;

int main() {
    cout << "Логические выражения для указанных условий:\n" << endl;
    
    
    int x = 4, y = 3;
    
    cout << "Тестовые значения: x = " << x << ", y = " << y << "\n" << endl;
    
    // а) х > 2 и у > 3
    bool a = (x > 2) && (y > 3);
    cout << "а) х > 2 и у > 3: " << x << " > 2 && " << y << " > 3 = " << boolalpha << a << endl;
    
   
    bool b = (x > 1) || (y > 2);
    cout << "б) х > 1 или y > 2: " << x << " > 1 || " << y << " > 2 = " << boolalpha << b << endl;
    
   
    bool c = (x > 0) && (y < 5);
    cout << "в) х > 0 и у < 5: " << x << " > 0 && " << y << " < 5 = " << boolalpha << c << endl;
    
   
    bool d = (x > 3) || (x < 1);
    cout << "г) х > 3 или x < 1: " << x << " > 3 || " << x << " < 1 = " << boolalpha << d << endl;
    
    
    bool e = (x > 3) && (x < 10);
    cout << "д) х > 3 и x < 10: " << x << " > 3 && " << x << " < 10 = " << boolalpha << e << endl;
    
    
    bool f = !(x > 2);
    cout << "е) неверно, что х > 2: !(" << x << " > 2) = " << boolalpha << f << endl;
    
   
    bool g = !((x > 0) && (x < 5));
    cout << "ж) неверно, что х > 0 и х < 5: !(" << x << " > 0 && " << x << " < 5) = " << boolalpha << g << endl;
    
    
    bool h = (x > 10) && (x < 20);
    cout << "з) 10 < x < 20: " << x << " > 10 && " << x << " < 20 = " << boolalpha << h << endl;
    
   
    bool i = (y > 0) && (y < 4) && (x < 5);
    cout << "и) 0 < y < 4 и x < 5: " << y << " > 0 && " << y << " < 4 && " << x << " < 5 = " << boolalpha << i << endl;
    
    return 0;
}