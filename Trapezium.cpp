#include "Trapezium.h"
#include <cmath>
#include <iostream>

Trapezium::Trapezium(double side_a, double side_b, double h) : b(side_b), height(h) { a = side_a; }

double Trapezium::calculateArea() const {
    return (a + b) * height / 2;
}

double Trapezium::calculatePerimeter() const {

    return a + b + (2 * sqrt(pow((b - a) / 2, 2) + pow(height, 2)));
}

void Trapezium::input() {
    std::cout << "Enter lengths of parallel sides and height of the trapezium: ";
    std::cin >> a >> b >> height;
}

void Trapezium::output() const {
    std::cout << "Trapezium - Parallel Side A: " << a << ", Parallel Side B: " << b << ", Height: " << height << std::endl;
    std::cout << "Area: " << calculateArea() << std::endl;
}
