#include "prostopadloscian.h"

int Prostopadloscian::getA() {
    return a;
}

int Prostopadloscian::getB() {
    return b;
}

int Prostopadloscian::getC() {
    return c;
}

int Prostopadloscian::setA(int a) {
    this->a=a;
}

int Prostopadloscian::setB(int b) {
    this->b=b;
}

int Prostopadloscian::setC(int b) {
    this->b=b;
}

void Prostopadloscian::get_data() {
    cout<<"Podaj wymiary prostopadloscianu: a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
}

int Prostopadloscian::pole() {
    int pole;
    pole=2*(a* b+a*c+c*b);
    return pole;
}


