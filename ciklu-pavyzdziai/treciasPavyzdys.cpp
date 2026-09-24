#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string password;

    do {
      cout << "Sukurkite slaptazodi bent 8 simboliu: "<<endl;
      cin >> password;
      if (password.length() < 8) {
        cout << "Slaptazodis yra per trumpas" << endl;
      }
    } while (password.length() < 8);

    cout << "Slaptozodis priimtas";


    return 0;
}
