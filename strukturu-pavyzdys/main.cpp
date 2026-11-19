#include <iostream>
#include <string>
using namespace std;

struct Team {
    string title;
    string city;
    bool isPlayedEuroleague;
};

int main() {

    Team teams[10];
    Team temp;
    int quantity, itemNumber;
    string findTeam;

    cout <<"Kiek komandu norite ivesti? Ne daugiau kaip 10"<<endl;
    cin >> quantity;

    for (int i = 0; i < quantity; i++) {
        cout <<"Koks komandos pavadinimas: "<<endl;
        cin >> teams[i].title;
        cout <<"Koks komandos miestas: "<<endl;
        cin >> teams[i].city;
        cout <<"Ar zaidzia Eurolygoje? Jei taip spauskite 1, jei ne 0 "<<endl;
        cin >> teams[i].isPlayedEuroleague;
    }

    for (int i = 0; i < quantity - 1; i++) {
        for (int j = i+1; j < quantity; j++) {
            if (teams[i].city > teams[j].city) {
                temp = teams[i];
                teams[i] = teams[j];
                teams[j] = temp;
            }
        }
    }

    for (int i = 0; i < quantity; i++) {
        cout <<i+1<<". Komanda: " <<teams[i].title<< " yra is miesto: "<<teams[i].city<<endl;
    }

    cout <<"-----Trynimas-----"<<endl;
    cout <<"Iveskite komanda kuria norite trinti? Iveskite komandos eiles numeri."<<endl;
    cin >> itemNumber;

    for (int i = itemNumber - 1; i < quantity; i++) {
        teams[i] = teams[i+1];
        teams[quantity].title = "";
        teams[quantity].city = "";
        teams[quantity].isPlayedEuroleague = false;
    }
    quantity--;
    for (int i = 0; i < quantity; i++) {
        cout <<i+1<<". Komanda: " <<teams[i].title<< " yra is miesto: "<<teams[i].city<<endl;
    }

    cout << "Kokios komandos ieskote?"<<endl;
    cin >> findTeam;
    for (int i = 0; i < quantity; i++) {
        if (teams[i].title == findTeam) {
            string text = teams[i].isPlayedEuroleague == true ? " zaidzia Eurolygoje" : "nezaidzia Eurolygoje";
            cout <<"Komanda: " <<teams[i].title<< " Miestas: "<<teams[i].city<<text<<endl;
        }
    }

    return 0;
}