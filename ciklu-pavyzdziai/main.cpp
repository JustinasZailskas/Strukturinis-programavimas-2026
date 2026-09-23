#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //1 pavyzdys su WHILE kol bus ivestas teigiamas skaicius
    // int number;
    //
    // cout << "Iveskite teigiama skaiciu" << endl;
    // cin >> number;
    //
    // while (number <= 0) {
    //     cout << "Klaida. Skaicius turi buti teigiamas"<<endl;
    //     cin >> number;
    // }
    // cout << "Ivestas skaicius yra lygus: " <<number<<endl;

    // 2 pavyzdys. Taupymas iki pasirinkto tikslo

    double savings = 100.0;
    const double target = 500.0;
    const double monthlyDeposit = 75.0;
    int month = 0;

    while (savings < target) {
        month++;
        savings += monthlyDeposit;
        cout << month << " menuo "
            <<fixed <<setprecision(2)
            <<savings <<" EUR"<<endl;
    }

    cout <<"Tikslas pasiektas per "<<month<< " menesius"<<endl;
    return 0;
}
