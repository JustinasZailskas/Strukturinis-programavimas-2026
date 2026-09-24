#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int balance = 100;
    int choice;

    do {
        cout << "\n---SASKAITOS MENIU---\n"
            << "1. Perziureti saskaitos likuti\n"
            << "2. Papildyti saskaita\n"
            << "3. Atlikti apmokejima\n"
            << "0. Baigti programos darba\n";
        cout <<"Pasirinkite funkcija: "<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Saskaitos likutis: " <<balance<<endl;
                break;
            case 2: {
                int amount;
                cout << "Papildymo suma: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Saskaita papildyta \n";
                } else {
                    cout << "Neteisinga ivesta suma. Ji turi buti teigiama\n";
                }
                break;
            }
            case 3: {
                int amount;
                cout << "Apmokejimo suma: ";
                cin >> amount;

                if (amount > balance) {
                    cout << "Saskaitoje nepakanka pinigu"<<endl;
                } else if ( amount < 0 ) {
                    cout << "Neteisinga suma"<<endl;
                } else {
                    balance -= amount;
                    cout << "Apmokejimas ivykdytas \n";
                }
                break;
            }
            case 0:
                cout << "Programa baige darba. "<<endl;
                break;
            default:
                cout << "Tokios funkcijos nera"<<endl;
        }
    } while(choice != 0);

    return 0;
}
