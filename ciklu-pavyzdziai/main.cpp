#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // //1 pavyzdys. Teigiamo skaiciaus ivedimas
    // int number;
    // cout <<"Iveskite teigiama skaiciu"<<endl;
    // cin >>number;
    //
    // while (number <= 0) {
    //     cout <<"Klaida. Skaicius yra netinkamas"<<endl;
    //     cout <<"Iveskite teigiama skaiciu"<<endl;
    //     cin >>number;
    // }
    //
    // cout << "Ivestas skaicius yra: "<<number<<endl;

    // 2 pavyzdys.Taupymas iki pasirinkto tikslo
    double savings = 100.0;
    const double target = 500.0;
    const double monthlyDeposit = 75.0;
    int month = 0;

    while (savings < target) {
        month++;
        savings += monthlyDeposit; //savings = savings + monthlyDeposit;
        cout << month << " menuo "
            <<fixed<<setprecision(2)
            <<savings<<" EUR"<<endl;
    }

    cout <<"Tikslas yra pasiektas per "<<month<<" menesius"<<endl;
    return 0;
}
