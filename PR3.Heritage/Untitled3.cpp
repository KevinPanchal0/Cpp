#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    void set_value(string n, int a) {
        name = n;
        age = a;
    }
};

class Zebra : public Animal {
public:
    void display_info() {
        cout << "I am a Zebra." << endl;
        cout << "My name is " << name << "." << endl;
        cout << "I am " << age << " years old." << endl;
        cout << "I am from Africa." << endl;
    }
};

class Dolphin : public Animal {
public:
    void display_info() {
        cout << "I am a Dolphin." << endl;
        cout << "My name is " << name << "." << endl;
        cout << "I am " << age << " years old." << endl;
        cout << "I am from the ocean." << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Ziggy", 5);
    dolphin.set_value("Daisy", 10);

    zebra.display_info();
    cout << endl;
    dolphin.display_info();

    return 0;
}

