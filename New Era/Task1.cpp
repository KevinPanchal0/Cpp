#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int ft, int in) : feet(ft), inches(in) {}

    void displayDistance() {
        cout << feet << " feet " << inches << " inches";
    }

    Distance addDistances(const Distance &dist2) {
        Distance result(0, 0);
        result.feet = feet + dist2.feet;
        result.inches = inches + dist2.inches;

        if (result.inches >= 12) {
            result.feet += result.inches / 12;
            result.inches %= 12;
        }

        return result;
    }
};

int main() {
	int a,b,c,d;
	
	cout<<"Enter first Feet and Inch: ";
	cin>>a>>b;
	cout<<"Enter Second Feet and Inch: ";
	cin>>c>>d;
    Distance dist1(a, b);
    Distance dist2(c, d);

    cout << "Distance 1: ";
    dist1.displayDistance();
    cout << std::endl;

    cout << "Distance 2: ";
    dist2.displayDistance();
    cout << std::endl;

    Distance sum = dist1.addDistances(dist2);

    cout << "Sum of distances: ";
    sum.displayDistance();
    cout << std::endl;

    return 0;
}
