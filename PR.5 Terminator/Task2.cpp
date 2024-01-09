#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "A constructor" << endl;
    }

    void display() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    B() {
        cout << "B constructor" << endl;
    }
};

class C : virtual public A {
public:
    C() {
        cout << "C constructor" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "D constructor" << endl;
    }
};

int main() {
    D dObject;
    dObject.display(); // No ambiguity, calls A's display function
    return 0;
}

