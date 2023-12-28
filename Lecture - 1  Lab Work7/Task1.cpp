#include <iostream>

using namespace std;

class Calculator {
public:
    // Method for division (2 arguments)
    static float calculate(float a, float b) {
        return a / b;
    }

    // Method for subtraction (3 arguments)
    static float calculate(float a, float b, float c) {
        return a - b - c;
    }
};

class ArithmeticOperations : public Calculator {
public:
    // Method overloading for multiplication (4 arguments)
    static float calculate(float a, float b, float c, float d) {
        return a * b * c * d;
    }

    // Method overloading for addition (5 arguments)
    static float calculate(float a, float b, float c, float d, float e) {
        return a + b + c + d + e;
    }
};

int main() {
    // Example usage

    // Division
    cout << "Division: " << Calculator::calculate(10.0, 2.0) << endl;

    // Subtraction
    cout << "Subtraction: " << Calculator::calculate(20.0, 5.0, 3.0) << endl;

//     Multiplication
    cout << "Multiplication: " << ArithmeticOperations::calculate(2.0, 3.0, 4.0, 5.0) << endl;

    // Addition
    cout << "Addition: " << ArithmeticOperations::calculate(1.0, 2.0, 3.0, 4.0, 5.0) << endl;

    return 0;
}
