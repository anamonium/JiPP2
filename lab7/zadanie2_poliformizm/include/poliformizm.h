#include <iostream>
#include <cmath>

using namespace std;

class Figure{
public:
    virtual double getArea() = 0;
};

class Circle: public Figure{
private:
    double r;

public:
    Circle(double rr);
    double getArea();
};

class Rectangle: public Figure{
private:
    double a,b;
public:
    Rectangle(double aa, double bb);
    double getArea();
};