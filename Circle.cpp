#include "Circle.h"
#include <iostream>
#include <cmath>
//const double M_PI = 3.141592653589793238;

Circle::Circle(double r) { a = r; }

double Circle::calculateArea() const {
    return M_PI * a * a;
}

double Circle::calculatePerimeter() const {
    return 2 * M_PI * a;
}

void Circle::input() {
    std::cout << "Enter radius of the circle: ";
    std::cin >> a;
}

void Circle::output() const {
    std::cout << "Circle - Radius: " << a << std::endl;
    std::cout << "Area: " << calculateArea() << ", Perimeter: " << calculatePerimeter() << std::endl;
}