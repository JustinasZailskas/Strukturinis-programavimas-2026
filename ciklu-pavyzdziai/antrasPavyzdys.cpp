#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int savings = 100;
    const int target = 500;
    const int monthlyDeposit = 75;
    int month = 0;

    while (savings < target) {
        month++;
        savings += monthlyDeposit;
        cout << "Menuo: "<<month<<". santaupos: " <<savings<<" EUR"<<endl;
    }

    cout <<"Tikslas yra pasiektas per "<<month<<" menesius"<<endl;

    return 0;
}
