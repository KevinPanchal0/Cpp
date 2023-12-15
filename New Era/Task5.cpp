#include <iostream>
#include <string>
using namespace std;
class House {
private:
    string owner;

public:
    string address;

    void setOwner(const string& newOwner) {
        owner = newOwner;
    }

    void displayDetails() const {
        cout << "House Details:" << endl;
        cout << "Owner: " << owner << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    House myHouse;

    myHouse.address = "Ahemdabad";

    myHouse.setOwner("Kevin Pancahl");

    myHouse.displayDetails();

    return 0;
}

