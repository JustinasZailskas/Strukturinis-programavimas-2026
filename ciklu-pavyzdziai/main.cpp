#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Iveskite teigiama skaiciu" << endl;
    cin >> number;

    while (number <= 0) {
        cout << "Klaida. Skaicius turi buti teigiamas"<<endl;
        cin >> number;
    }
    cout << "Ivestas skaicius yra lygus: " <<number<<endl;

    return 0;
}
