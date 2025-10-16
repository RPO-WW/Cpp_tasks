#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;

    cout << "Введите четырехзначное число: ";
    cin >> number;


    if (number.length() != 4) {
        cout << "Ошибка: число должно быть четырехзначным!" << endl;
        return 1;
    }
    if (number.find('4') != string:: npos) {
        cout << "а) Цифра 4 входит в число" << endl;
    } else {
        cout << "а) Цифра 4 не входит в число" << endl;
    }


    char targetDigit;
    cout << "б) Введите цифру для проверки (0-9): ";
    cin >> targetDigit;

    if (targetDigit < '0' || targetDigit > '9') {
        cout << "Ошибка: цифра должна быть от 0 до 9!" << endl;
        return 1;
    }
    if (number.find(targetDigit) != string::npos) {
        cout << "б) Цифра" << targetDigit << "входит в число" << endl;
    } else {
        cout << "б) Цифра " << targetDigit << " не входит в число" << endl;
    }
    return 0;
}