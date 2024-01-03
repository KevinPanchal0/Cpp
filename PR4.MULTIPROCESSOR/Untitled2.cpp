#include <iostream>

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}

    Distance operator+(const Distance& d) {
        Distance result;
        result.feet = feet + d.feet;
        result.inches = inches + d.inches;
        if (result.inches >= 12.0) {
            result.inches -= 12.0;
            result.feet++;
        }
        return result;
    }

    void display() {
        std::cout << "Feet: " << feet << " Inches: " << inches << std::endl;
    }
};

int main() {
    Distance d1(5, 10.5);
    Distance d2(2, 7.25);
    Distance d3;

    d3 = d1 + d2;

    std::cout << "Distance 1: ";
    d1.display();

    std::cout << "Distance 2: ";
    d2.display();

    std::cout << "Sum of Distances: ";
    d3.display();

    return 0;
}

