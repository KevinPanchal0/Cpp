#include <iostream>
#include <string>

using namespace std;

class Room {
public:
    string name;
    int area;

    void read() {
        cout << "Enter Room Name: ";
        cin >> name;
        cout << "Enter Room Area (in square feet): ";
        cin >> area;
    }

    void display() const {
        cout << "Room Name: " << name << endl;
        cout << "Room Area: " << area << " square feet" << endl;
    }
};

class House {
public:
    string name;
    static const int maxRooms = 5;  // Maximum number of rooms
    Room rooms[maxRooms];

    void read() {
        cout << "Enter House Name: ";
        cin >> name;

        for (int i = 0; i < maxRooms; ++i) {
            rooms[i].read();
        }
    }

    void display() const {
        cout << "House Name: " << name << endl;
        cout << "Rooms in the House:" << endl;

        for (int i = 0; i < maxRooms; ++i) {
            rooms[i].display();
            cout << "------------------------" << endl;
        }
    }
};

int main() {
    House myHouse;

    myHouse.read();
    cout << "\nHouse Details:\n";
    myHouse.display();

    return 0;
}

