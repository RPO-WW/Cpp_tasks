#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Введите n (10 ≤ n ≤ 999, десятки ≠ 0): ";
        cin >> n;
    } while (n < 10 || n > 999 || (n / 10) % 10 == 0);
    

    int hundreds_n = n / 100;      
    int tens_n = (n / 10) % 10;   
    int units_n = n % 10;            
    

    int last_digit_x = hundreds_n; 
    int first_two_digits_x = tens_n * 10 + units_n;
    

    int x = first_two_digits_x * 10 + last_digit_x;
    
    cout << "При n = " << n << " исходное число x = " << x << endl;
    

    int check = (x - x % 10) / 10;
    int result = (x % 10) * 100 + check; 
    
    cout << "Проверка: из x вычли последнюю цифру: " << (x - x % 10) << endl;
    cout << "Разделили на 10: " << check << endl;
    cout << "Приписали слева последнюю цифру x (" << (x % 10) << "): " << result << endl;
    
    return 0;
}