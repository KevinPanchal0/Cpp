#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void calculate() = 0;
};

// Derived class for Circle
class Circle : public Shape {
public:
    void calculate() {
        // Code to calculate area of circle
    }
};

// Derived class for Triangle
class Triangle : public Shape {
public:
    void calculate() {
        // Code to calculate area of triangle
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    void calculate() {
        // Code to calculate area of rectangle
    }
};

int main() {
    // Create objects of derived classes
    Circle circle;
    Triangle triangle;
    Rectangle rectangle;

    // Call the calculate function for each object
    circle.calculate();
    triangle.calculate();
    rectangle.calculate();

    return 0;
}

