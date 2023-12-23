#include <iostream>

using namespace std;

class Base {
protected:
    int num1;

public:
    Base(int a) : num1(a) {}
};

class Intermediate1 : virtual public Base {
protected:
    int num2;

public:
    Intermediate1(int a, int b) : Base(a), num2(b) {}
};

class Intermediate2 : virtual public Base {
protected:
    int num3;

public:
    Intermediate2(int a, int c) : Base(a), num3(c) {}
};

class Derived : public Intermediate1, public Intermediate2 {
protected:
    int num4;

public:
    Derived(int a, int b, int c, int d) : Base(a), Intermediate1(a, b), Intermediate2(a, c), num4(d) {}

    void calculateSum() {
        int sum = num1 + num2 + num3 + num4;
        cout << "Sum of four numbers: " << sum << endl;
    }
};

int main() {
	int a,b,c,d;
	cout<<"Enter the Value of A: ";
	cin>>a;
	cout<<"Enter the Value of B: ";
	cin>>b;
	cout<<"Enter the Value of C: ";
	cin>>c;
	cout<<"Enter the Value of D: ";
	cin>>d;
    Derived obj(a, b, c, d);
    obj.calculateSum();

    return 0;
}

