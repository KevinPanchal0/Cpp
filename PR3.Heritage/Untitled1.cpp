#include <iostream>

class Shape {
protected:
    int width;
    int height;
public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }
};

class Triangle : public Shape {
public:
    Triangle(int w, int h) : Shape(w, h) {}

    int area() {
        return (width * height) / 2;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int area() {
        return width * height;
    }
};

int main() {
    Triangle triangle(5, 3);
    Rectangle rectangle(4, 6);

    int triangleArea = triangle.area();
    int rectangleArea = rectangle.area();

    std::cout << "Triangle Area: " << triangleArea << std::endl;
    std::cout << "Rectangle Area: " << rectangleArea << std::endl;

    return 0;
}

