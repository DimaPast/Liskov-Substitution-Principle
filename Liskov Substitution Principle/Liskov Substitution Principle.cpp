#include <iostream>


class Shape {
public:
    virtual double getWidth() const = 0;
    virtual double getHeight() const = 0;
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getWidth() const override {
        return width;
    }

    double getHeight() const override {
        return height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getWidth() const override {
        return 2 * radius;
    }

    double getHeight() const override {
        return 2 * radius;
    }
};

class AreaCalculator {
public:
    double calculateArea(const Shape& shape) const {
        return shape.getWidth() * shape.getHeight();
    }
};

int main() {
    Rectangle rectangle(5.0, 10.0);
    Circle circle(7.0);

    AreaCalculator areaCalculator;

    std::cout << "Rectangle Area: " << areaCalculator.calculateArea(rectangle) << std::endl;

    std::cout << "Circle Area: " << areaCalculator.calculateArea(circle) << std::endl;

    return 0;
}