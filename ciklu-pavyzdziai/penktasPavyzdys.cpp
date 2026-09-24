#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int studentGradesNum = 5;
    int grade;
    int sum = 0;
    int highestGrade = 0;

    for (int i = 1; i <= studentGradesNum; i++) {
        cout <<"Iveskite "<<i<<" studento pazymi"<<endl;
        cin >> grade;

        sum += grade;
        highestGrade = (grade > highestGrade) ? grade : highestGrade;
    }

    double average = static_cast<double>(sum) / studentGradesNum;
    cout << fixed << setprecision(2);
    cout << "Pazymiu vidurkis: "<<average<<endl;
    cout << "Didziausias pazymys: "<<highestGrade<<endl;

    return 0;
}
