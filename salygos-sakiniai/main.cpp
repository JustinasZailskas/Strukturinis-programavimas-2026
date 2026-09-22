#include <iostream>
#include <string>

using namespace std;

int main() {
    // string vaisius = "Aviete";
    //
    // if (vaisius == "Obuolys") {
    //     cout<<"Cia yra obuolys";
    // } else if (vaisius == "Aviete") {
    //     cout<<"Cia yra aviete";
    // } else {
    //     cout <<"Kitas vaisius";
    // }

    int diena;
    bool isRunning = true;
while (isRunning) {
    cout <<"Iveskite savaites diena (INT), sustabdyti spauskite - 0" <<endl;
    cin >> diena;

    switch (diena) {
        case 1:
            cout <<"Pirmadienis"<<endl;
        break;
        case 2:
            cout << "Antradienis"<<endl;
        break;
        case 3:
            cout <<"Treciadienis"<<endl;
        break;
        case 4:
            cout <<"Ketvirtadienis"<<endl;
        break;
        case 5:
            cout <<"Penktadienis"<<endl;
        break;
        case 6:
            cout <<"Sestadienis"<<endl;
        break;
        case 7:
            cout <<"Sekmadienis"<<endl;
        break;
        case 0:
            isRunning = false;
            break;
        default:
            cout <<"Tokios savaites dienos nera"<<endl;
    }
}

    return 0;
}
