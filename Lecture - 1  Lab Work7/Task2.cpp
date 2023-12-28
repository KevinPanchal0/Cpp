#include <iostream>
using namespace std;
class Cricket {
public:
    virtual int getTotalOvers() {
        return 50;
    }
};

class T20Match : public Cricket {
public:
    int getTotalOvers() override {
        return 20;
    }
};

class TestMatch : public Cricket {
public:
    int getTotalOvers() override {
        return 90;
    }
};

int main() {
    Cricket cricketMatch;
    T20Match t20Match;
    TestMatch testMatch;

    cout << "Cricket Match - Total Overs: " << cricketMatch.getTotalOvers() << endl;
    cout << "T20 Match - Total Overs: " << t20Match.getTotalOvers() << endl;
    cout << "Test Match - Total Overs: " << testMatch.getTotalOvers() << endl;

    return 0;
}

