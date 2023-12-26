#include<iostream>

using namespace std;

int main() {
    // Given values
    double base = 56.0;
    double height = 21.0;

    // Calculate the area of the triangle
    double area = 0.5 * base * height;

    // Print the area of the triangle
    cout << "Area of the triangle: " << area << " square units" << endl;

    // Calculate the sum of all digits in the area
    int sumOfDigits = 0;
    int areaInteger = static_cast<int>(area); // Convert area to an integer

    while (areaInteger != 0) {
        sumOfDigits += areaInteger % 10; // Extract the last digit and add to sum
        areaInteger /= 10; // Remove the last digit
    }

    // Print the sum of all digits in the area
    cout << "Sum of all digits in the area: " << sumOfDigits << endl;

    return 0;
}
