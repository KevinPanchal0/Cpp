#include<iostream>
#include<cmath>

class Shape {
public:
    virtual void calculate() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculate() override {
        double area = 3.14159 * radius * radius;
        std::cout << "Area of Circle: " << area << std::endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void calculate() override {
        double area = 0.5 * base * height;
        std::cout << "Area of Triangle: " << area << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculate() override {
        double area = length * width;
        std::cout << "Area of Rectangle: " << area << std::endl;
    }
};

int main() {
    Circle circle(5.0);
    Triangle triangle(4.0, 6.0);
    Rectangle rectangle(3.0, 7.0);

    Shape* shapePtr;

    shapePtr = &circle;
    shapePtr->calculate();

    shapePtr = &triangle;
    shapePtr->calculate();

    shapePtr = &rectangle;
    shapePtr->calculate();

    return 0;
}
