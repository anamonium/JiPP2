#include <iostream>
#include <cmath>
using namespace std;

class Figura{
protected:
    string nazwa, kolor;
};

class Trojkat: public Figura{
    friend void print_triangle(Trojkat&);
protected:
    double a,b,c,h;

public:
    Trojkat(double a, double b, double c,double h);
    double obwod(double a, double b, double c);
    double pole (double a, double h);
};

void print_triangle(Trojkat& triangle);

class Kwadrat: public Figura {
    friend void print_square(Kwadrat&);
protected:
    double a;

public:
    Kwadrat(double a);
    double obwod(double a);
    double pole(double a);
};

void print_square(Kwadrat& kwadrat);

class Trapez: public Figura{
    friend void print_trapez(Trapez&);
protected:
    double a,b,c,d,h;

public:
    Trapez(double a,double b, double c, double d, double h);
    double obwod(double a,double b, double c, double d);
    double pole(double a, double b, double h);
};

void print_trapez(Trapez& trapez);

class Okrag: public Figura{
    friend void print_okrag(Okrag&);
protected:
    double r;

public:
    Okrag(double r);
    double obwod(double r);
    double pole(double r);
};

void print_okrag(Okrag& okrag);