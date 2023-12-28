#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual void calculate() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculate() override {
        double area = 3.14159 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void calculate() override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculate() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Circle circle(5.0);
    Triangle triangle(4.0, 6.0);
    Rectangle rectangle(3.0, 7.0);

    circle.calculate();
    triangle.calculate();
    rectangle.calculate();

    return 0;
}

