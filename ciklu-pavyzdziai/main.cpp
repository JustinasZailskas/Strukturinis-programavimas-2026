#include <iostream>
#include <iomanip>
#include <string>

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

    // double savings = 100.0;
    // const double target = 500.0;
    // const double monthlyDeposit = 75.0;
    // int month = 0;
    //
    // while (savings < target) {
    //     month++;
    //     savings += monthlyDeposit;
    //     cout << month << " menuo "
    //         <<fixed <<setprecision(2)
    //         <<savings <<" EUR"<<endl;
    // }
    //
    // cout <<"Tikslas pasiektas per "<<month<< " menesius"<<endl;

    //3 pavyzdys. Slaptozodzio kurimas

    // string password;
    //
    // do {
    //     cout <<"Sukurkite slaptazodi bent 8 simboliu ilgumo"<<endl;
    //     cin >> password;
    //
    //     if (password.length() < 8) {
    //         cout << "Slaptazodis per trumpas. "<<endl;
    //     }
    // } while (password.length() < 8);
    //
    // cout << "Slaptazodis yra priimtas"<<endl;

    //4 pavyzdys. Saskaitos valdymo meniu

    // int balance = 100;
    // int choice;
    //
    // do {
    //     cout << "\n--- SASKAITOS MENIU ---\n";
    //     cout << "1. Perziureti balansa\n";
    //     cout << "2. Papildyti balansa \n";
    //     cout << "3. Atlikti mokejima \n";
    //     cout << "0. Baigti programa \n";
    //     cout << "Iveskite pasirinkima \n";
    //     cin >> choice;
    //
    //     switch (choice) {
    //         case 1:
    //             cout << "Balansas: "<<balance<<" Eur\n";
    //             break;
    //         case 2: {
    //             int amount;
    //             cout <<"Papildymo suma: ";
    //             cin >> amount;
    //
    //             if (amount > 0) {
    //                 balance += amount;
    //                 cout <<"Balansas papildytas. \n";
    //             } else {
    //                 cout <<"Neteisinga suma. Ivedama suma turi buti teigiama. \n";
    //             }
    //             break;
    //         }
    //         case 3: {
    //             int amount;
    //             cout << "Mokejimo suma";
    //             cin >> amount;
    //
    //             if (amount <= 0) {
    //                 cout <<"Neteisinga suma. \n";
    //             } else if (amount > balance) {
    //                 cout <<"Nepakankamas likutis balanse. \n";
    //             } else {
    //                 balance -= amount; //balance = balance - amount
    //                 cout <<"Mokejimas atliktas \n";
    //             }
    //             break;
    //         }
    //         case 0:
    //             cout <<"Programa baigiama. \n";
    //             break;
    //         default:
    //             cout <<"Tokio pasirinkimo nera. \n";
    //     }
    //
    //
    // } while (choice != 0);

    //5 pavyzdys. Studento pazymiu statistika

    const int gradesCount = 5;
    int grade;
    int sum = 0;
    int highestGrade = 0;


    for (int i = 1; i <= gradesCount; i++) {
        cout <<"Iveskite "<<i<<" studento pazymi: ";
        cin >> grade;

        sum += grade;

        if (grade > highestGrade) {
            highestGrade = grade;
        }
    }

    double average = static_cast<double>(sum) / gradesCount;
    cout <<fixed<< setprecision(2);
    cout <<"Pazymiu vidurkis: "<<average <<endl;
    cout <<"Didziausias pazymys: "<<highestGrade <<endl;

    return 0;
}
