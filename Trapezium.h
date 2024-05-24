#pragma once
#include "Figure.h"

class Trapezium : public Figure {
private:
    double b;
    double height;

public:
    Trapezium(double side_a = 0, double side_b = 0, double h = 0);

    double calculateArea() const override;
    double calculatePerimeter() const override;

    void input() override;
    void output() const override;
};
