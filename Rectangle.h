#pragma once
#include "Figure.h"

class Rectangle : public Figure {
private:
    double width;

public:
    Rectangle(double l = 0, double w = 0);

    double calculateArea() const override;
    double calculatePerimeter() const override;

    void input() override;
    void output() const override;
};
