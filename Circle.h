#pragma once
#include "Figure.h"

class Circle : public Figure {
public:
    Circle(double r = 0);

    double calculateArea() const override;
    double calculatePerimeter() const override;

    void input() override;
    void output() const override;
};
