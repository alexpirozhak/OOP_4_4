#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double l, double w) : width(w) { a = l; }

double Rectangle::calculateArea() const {
    return a * width;
}

double Rectangle::calculatePerimeter() const {
    return 2 * (a + width);
}

void Rectangle::input() {
    std::cout << "Enter length and width of the rectangle: ";
    std::cin >> a >> width;
}

void Rectangle::output() const {
    std::cout << "Rectangle - Length: " << a << ", Width: " << width << std::endl;
    std::cout << "Area: " << calculateArea() << ", Perimeter: " << calculatePerimeter() << std::endl;
}
