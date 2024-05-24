#include <iostream>
#include <typeinfo>
#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Trapezium.h"

using namespace std;
static void displayFigureInfo(const Figure& figure) {
    cout << "Polymorphic object type: " << typeid(figure).name() << endl;
    figure.output();
}

int main() {
    Figure* figures[3];

    figures[0] = new Rectangle();
    figures[1] = new Circle();
    figures[2] = new Trapezium();

    for (int i = 0; i < 3; ++i) {
        figures[i]->input();
        displayFigureInfo(*figures[i]);
        delete figures[i];
        cout << endl;
    }

    return 0;
}
