#include <iostream>

using namespace std;

struct PlayerScore {
    string nickname;
    uint16_t score;

    bool operator > (PlayerScore Pl) {
        return this->score > Pl.score;
    }

    bool operator < (PlayerScore Pl) {
        return this->score < Pl.score;
    }

    bool operator == (PlayerScore Pl) {
        return this->score == Pl.score;
    }

    PlayerScore operator += (int points) {
        this->score = this->score + points;
        return *this;
    }

    PlayerScore operator -= (int penalty) {
        this->score = this->score - penalty;
        return *this;
    }
};

void showResults (PlayerScore Pl1, PlayerScore Pl2) {
    if (Pl1 > Pl2) cout << Pl1.nickname << " is winner!" << " His score is " << Pl1.score << endl;
    else if (Pl1 < Pl2) cout << Pl2.nickname << " is winner!" << " His score is " << Pl2.score <<endl;
    else cout << "Draw" << endl;
}

int main()
{
    PlayerScore Pl1 {"John", 100};
    PlayerScore Pl2 {"Sam", 50};
    Pl1 -= 43;
    Pl2 += 10;
    showResults(Pl1, Pl2);
    return 0;
}
