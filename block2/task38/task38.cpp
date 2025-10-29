#include <iostream>
#include <string>
using namespace std;

int findKthDigit(int k) {

    int currentNumber = 101;
    int position = 1;
    
    while (true) {

        if (position + 2 >= k) {
            
            string numStr = to_string(currentNumber);
            return numStr[k - position] - '0';
        }
        position += 3;
        currentNumber++;
        
        
        if (currentNumber > 150) {
            return -1; 
        }
    }
}

int main() {
    int k;
    
    cout << "Введите k (1 <= k <= 150): ";
    cin >> k;
    
    if (k < 1 || k > 150) {
        cout << "Ошибка: k должно быть в диапазоне от 1 до 150" << endl;
        return 1;
    }
    
    int digit = findKthDigit(k);
    
    if (digit != -1) {
        cout << k << "-я цифра в последовательности: " << digit << endl;
        
        
        cout << "\nАнализ положения:" << endl;
        
    
        if (k % 3 == 0) {
            cout << "k кратно трем - это последняя цифра числа" << endl;
        } else if (k % 3 == 1) {
            cout << "k имеет вид 1, 4, 7, ... - это первая цифра числа" << endl;
        } else if (k % 3 == 2) {
            cout << "k имеет вид 2, 5, 8, ... - это вторая цифра числа" << endl;
        }
    } else {
        cout << "Ошибка при вычислении" << endl;
    }
    
    return 0;
}