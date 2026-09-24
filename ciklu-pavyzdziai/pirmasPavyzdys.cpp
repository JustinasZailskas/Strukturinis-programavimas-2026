#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Iveskite teigiama skaiciu: ";
    cin >> number;

    while (number <= 0) {
        cout <<"Klaida. Skaicius turi buti teigiamas"<<endl;
        cout << "Iveskite teigiama skaiciu: "<<endl;
        cin >> number;
    }
    cout << "Ivestas skaicius: "<<number<<endl;
    return 0;
}
