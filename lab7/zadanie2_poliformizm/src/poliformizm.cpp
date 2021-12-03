#include "poliformizm.h"

Rectangle::Rectangle(double aa, double bb): a(aa), b(bb) {};
double Rectangle::getArea() {
    return a*b;
}

Circle::Circle(double rr): r(rr) {};
double Circle::getArea() {
    return M_PI*r*r;
}