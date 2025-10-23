#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ввдеите секунд с начала суток: " << endl;
    cin >> n;

    double hour = n / 3600;

    int opr_hour;
    cout << "Ввдеите количество часов с начала суток: " << endl;
    cin >> opr_hour;

    int minuts = opr_hour * 60;

    int opr_minuts;
    cout << "Ввдеите количество минут с начала суток: " << endl;
    cin >> opr_minuts;

    int secunds = opr_minuts * 60;

    cout << "а) Часов с начала суток: " << hour << endl; 
    cout << "б) Минут с начала суток: " << minuts << endl; 
    cout << "в) Секунд с начала суток: " << secunds << endl;

    return(0); 
}