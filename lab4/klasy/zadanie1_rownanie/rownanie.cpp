#include "rownanie.h"

int RownanieKwadratowe::getA() {
    return a;
}

int RownanieKwadratowe::getB() {
    return b;
}

int RownanieKwadratowe::getC() {
    return c;
}

int RownanieKwadratowe::setA(int a) {
    this->a=a;
}

int RownanieKwadratowe::setB(int b) {
    this->b=b;
}

int RownanieKwadratowe::setC(int b) {
    this->b=b;
}
void RownanieKwadratowe::get_data() {
    cout<<"Podaj wspolczynniki:\na = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
}

void RownanieKwadratowe::print_equation() {
    cout<<"Rownanie:\t f(x) = "<< a<<"x^2 + "<< b<<"x + "<< c<<endl;
}

