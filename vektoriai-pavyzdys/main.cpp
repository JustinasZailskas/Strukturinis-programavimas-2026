#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct NameType {
    string firstName;
    string lastName;
};

struct StatisticType {
    int pointsScored;
    int assists;
    int steals;
    int turnovers;
};

struct AveragesType {
    double  avgPointsPerGame;
    double  avgAssistsPerGame;
    double  avgStealsPerGame;
    double  avgTurnoversPerGame;
};

struct PlayerType {
    NameType name;
    string position;
    double height;
    StatisticType statistic;
    int gamesPlayed;
    AveragesType averages;
};

void computeAverages(PlayerType &p) {
    if (p.gamesPlayed > 0) {
        p.averages.avgPointsPerGame = (double)p.statistic.pointsScored/p.gamesPlayed;
        p.averages.avgAssistsPerGame = (double)p.statistic.assists/p.gamesPlayed;
        p.averages.avgStealsPerGame = (double)p.statistic.steals/p.gamesPlayed;
        p.averages.avgTurnoversPerGame = (double)p.statistic.turnovers/p.gamesPlayed;
    } else {
        p.averages.avgPointsPerGame = 0;
        p.averages.avgAssistsPerGame = 0;
        p.averages.avgStealsPerGame = 0;
        p.averages.avgTurnoversPerGame = 0;
    }

}

int main() {
    vector<PlayerType> players;
    PlayerType temp;

    ifstream playerFile;
    playerFile.open("players.txt");
    if(!playerFile.is_open()) {
        cout<<"Cannot open the file"<<endl;
        return 1;
    }

    while (playerFile >> temp.name.firstName
        >> temp.name.lastName
        >> temp.position
        >> temp.height
        >> temp.gamesPlayed
        >> temp.statistic.pointsScored
        >> temp.statistic.assists
        >> temp.statistic.steals
        >> temp.statistic.turnovers) {
        computeAverages(temp);
        players.push_back(temp);
    }

    playerFile.close();


}