#include<iostream>
using namespace std;

class Bank {
protected:
    double rate;
public:
    Bank(double r) : rate(r) {}
    virtual double getROI() = 0;
};

class RBI : public Bank {
public:
    RBI(double r) : Bank(r) {}
    double getROI() {
        return rate;
    }
};

class SBI : public RBI {
public:
    SBI(double r) : RBI(r) {}
    double getROI() {
        return rate;
    }
};

class BOB : public RBI {
public:
    BOB(double r) : RBI(r) {}
    double getROI() {
        return rate;
    }
};

class ICICI : public RBI {
public:
    ICICI(double r) : RBI(r) {}
    double getROI() {
        return rate;
    }
};

int main() {
    double p = 10000;
    double r = 0.08;

    RBI rbi(r);
    SBI sbi(r);
    BOB bob(r);
    ICICI icici(r);

    cout << "Rate of Interest for RBI: " << rbi.getROI() << endl;
    cout << "Rate of Interest for SBI: " << sbi.getROI() << endl;
    cout << "Rate of Interest for BOB: " << bob.getROI() << endl;
    cout << "Rate of Interest for ICICI: " << icici.getROI() << endl;

    return 0;
}