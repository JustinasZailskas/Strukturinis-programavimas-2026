#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //1 pavyzdys. Teigiamo skaiciaus ivedimas
    int number;
    cout <<"Iveskite teigiama skaiciu"<<endl;
    cin >>number;

    while (number <= 0) {
        cout <<"Klaida. Skaicius yra netinkamas"<<endl;
        cout <<"Iveskite teigiama skaiciu"<<endl;
        cin >>number;
    }

    cout << "Ivestas skaicius yra: "<<number<<endl;
    return 0;
}
