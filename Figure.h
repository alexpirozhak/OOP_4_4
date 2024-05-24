#pragma once

class Figure {
protected:
    double a;
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;

    virtual void input() = 0;
    virtual void output() const = 0;
};
