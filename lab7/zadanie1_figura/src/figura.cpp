#include "figura.h"

double Trojkat::pole(double a, double h) {
    return a*h/2;
}

double Trojkat::obwod(double a, double b, double c) {
    return a+b+c;
}

double Kwadrat::obwod(double a) {
    return 4*a;
}

double Kwadrat::pole(double a) {
    return a*a;
}

double Trapez::pole(double a, double b, double h) {
    return (a*b)*h/2;
}

double Trapez::obwod(double a, double b, double c, double d) {
    return a+b+c+d;
}

double Okrag::obwod(double r) {
    return 2*M_PI*r;
}

double Okrag::pole(double r) {
    return r*r*M_PI;
}

Trojkat:: Trojkat(double a, double b, double c,double h): a(a),b(b), c(c), h(h){};
Trapez::Trapez(double a, double b, double c, double d, double h): a(a), b(b), c(c), d(d), h(h) {};
Kwadrat::Kwadrat(double a): a(a) {};
Okrag::Okrag(double r): r(r) {};

void print_triangle(Trojkat& trojkat){
    cout<<"Trojkat: "<<trojkat.nazwa
    <<"\nKolor: "<<trojkat.kolor;
}

void print_okrag(Okrag& okrag){
    cout<<"Okrag: "<<okrag.nazwa
        <<"\nKolor: "<<okrag.kolor;
}

void print_trapez(Trapez& trapez){
    cout<<"Trapez: "<<trapez.nazwa
        <<"\nKolor: "<<trapez.kolor;
}

void print_square(Kwadrat& kwadrat){
    cout<<"Kwadrat: "<<kwadrat.nazwa
        <<"\nKolor: "<<kwadrat.kolor;
}