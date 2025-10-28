#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Введите четырехзначное число: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Ошибка: число должно быть четырехзначным!" << endl;
        return 1;
    }

    int n1 = number / 1000;
    int n2 = (number / 100) % 10;
    int n3 = (number / 10) % 10;
    int n4 = number % 10;

    cout << "Исходное число: " << number << " (" << n1 << n2 << n3 << n4 << ")" << endl;

    cout << "=================================" << endl;

    // a)
    int reversed = n4 * 1000 + n3 * 100 + n2 * 10 + n1;
    cout << "а) Число справа налево: " << reversed << endl;

    // б) 
    int swapped_p = n2 * 1000 + n1 * 100 + n4 * 10 + n3;
    cout << "б) Перестановка 1-2 и 3-4 цифр: " << swapped_p << endl;

    // в)
    int swapped_m = n1 * 1000 + n3 * 100 + n2 * 10 + n4;
    cout << "в) Перестановка 2-3 цифр: " << swapped_m << endl;

    // г)
    int swapped_g = n3 * 1000 + n4 * 100 + n1 * 10 + n2;
    cout << "г) Перестановка двух первых и двух последних цифр: " << swapped_g << endl;

}