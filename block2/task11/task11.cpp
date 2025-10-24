#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введите двузначное число: ";
    cin >> num;
    
    // Проверка, что число действительно двузначное
    if (num < 10 || num > 99) {
        cout << "Ошибка: введите двузначное число (от 10 до 99)." << endl;
        return 1;
    }
    
    // Извлекаем цифры
    int first_digit = num / 10;   // первая (старшая) цифра
    int second_digit = num % 10;  // вторая (младшая) цифра
    
    // Составляем новое число с переставленными цифрами
    int reversed_num = second_digit * 10 + first_digit;
    
    cout << "Число с переставленными цифрами: " << reversed_num << endl;
    
    return 0;
}