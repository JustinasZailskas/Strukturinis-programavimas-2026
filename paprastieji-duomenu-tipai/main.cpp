#include <iostream>
#include <string>

using namespace std;

int main() {
    //Komandos informacija
    string komanda = "Manchester City";
    string zaidejas = "Erling Haaland";

    int marskineliuNumeris = 9;
    int ivarciai, rungtynes;

    cout <<"Iveskite zaidejo "<<zaidejas<<" imustu ivarciu kieki Pasaulio cempionate";
    cin >> ivarciai;
    cout <<"Iveskite zaidejo " <<zaidejas<<" zaistu rungtyniu kieki Pasaulio cempionate";
    cin >> rungtynes;

    double ugis = 1.95;
    double svoris = 88.7;

    int svorisKonv = static_cast<int>(svoris);

    double ivarciuVidurkis = static_cast<double>(ivarciai)/ rungtynes;

    cout <<"Komanda: " << komanda << endl;
    cout <<"Zaidejas: " << zaidejas << endl;
    cout <<"Numeris: " <<marskineliuNumeris << endl;
    cout <<"Ugis: " <<ugis <<" m"<< endl;
    cout <<"Svoris: " <<svoris <<" kg"<< endl;
    cout <<"SvorisKonv: " <<svorisKonv <<" kg"<<endl;
    cout <<"Ivarciai: " <<ivarciai << endl;
    cout <<"Rungtynes: " <<rungtynes << endl;
    cout <<"Ivarciu vidurkis: " <<ivarciuVidurkis << endl;


    return 0;
}
