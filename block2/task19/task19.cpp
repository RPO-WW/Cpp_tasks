#include <iostream>
using namespace std;

int main() {
    try{
        int four;
        cout << "Ввдиете четырёхзначное число: " << endl;
        cin >> four;

        if(four < 10000 && four > 999) {
            int four_0 = four / 1000;
            cout << four_0 << endl;
            int four_1 = four / 100 % 10;
            cout << four_1 << endl;
            int four_2 = four % 100 / 10;
            cout << four_2 << endl;
            int four_3 = four % 10;
            cout << four_3 << endl;
            int summa = four_0 + four_1 + four_2 + four_3;
            int proiz = four_0 * four_1 * four_2 * four_3;

            cout << "Сумма: " << summa << endl;
            cout << "Произведение: " << proiz << endl;
        }
        else{
            cerr << "Ввдеите четырёхзначное число" << endl;
        }
    }
    catch(exception e) {
        cerr << "Ошибка" << endl;
    }
    return(0);
}