#include <iostream>
#include <string>

using namespace std;

class Cafe {
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Cafe()
        : cafe_id(0), cafe_establish_year(0), cafe_staff_quantity(0) {}

    Cafe(int id, const string& name, const string& type, const string& rating,
         const string& location, int establishYear, int staffQuantity)
        : cafe_id(id), cafe_name(name), cafe_type(type), cafe_rating(rating),
          cafe_location(location), cafe_establish_year(establishYear), cafe_staff_quantity(staffQuantity) {}

    void displayCafeInfo() const {
        cout << "\nDetails of Cafe are as follows:\n";
        cout << "Cafe ID: " << cafe_id << "\nCafe Name: " << cafe_name
             << "\nCafe Type: " << cafe_type << "\nCafe Rating: " << cafe_rating
             << "\nCafe Location: " << cafe_location << "\nEstablishment Year: " << cafe_establish_year
             << "\nStaff Quantity: " << cafe_staff_quantity << endl;
    }
};

int main() {
    int numCafes;

    cout << "Enter the number of Cafes: ";
    cin >> numCafes;

    Cafe cafes[numCafes];

    for (int i = 0; i < numCafes; ++i) {
        cout << "\nEnter details for Cafe " << (i + 1) << ":" << endl;

        int id, establishYear, staffQuantity;
        string name, type, rating, location;

        cout << "Cafe ID: ";
        cin >> id;

        cin.ignore(); // Clear the newline character from the buffer

        cout << "Cafe Name: ";
        getline(cin, name);

        cout << "Cafe Type (e.g., rooftop or normal): ";
        getline(cin, type);

        cout << "Cafe Rating: ";
        getline(cin, rating);

        cout << "Cafe Location: ";
        getline(cin, location);

        cout << "Establishment Year: ";
        cin >> establishYear;

        cout << "Staff Quantity: ";
        cin >> staffQuantity;

        cafes[i] = Cafe(id, name, type, rating, location, establishYear, staffQuantity);
    }

    cout << "\nDisplaying Cafe Information:\n";
    for (int i = 0; i < numCafes; ++i) {
        cafes[i].displayCafeInfo();
    }

    return 0;
}
