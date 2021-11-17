#include "complex.h"

Complex::Complex() {};

Complex::Complex(double x, double i) : x(x), i(i) {}

double Complex::length() {
    return sqrt(x * x + i * i);
}

Complex Complex::operator+(const Complex &rhs) const {
    cout<<"\nDodawanie wektorow"<<endl;
    return {x + rhs.x, i + rhs.i};
}

Complex & Complex::operator+=(const Complex &rhs) {
    this->x = this->x + rhs.x;
    this->i = this->i + rhs.i;
    return *this;
}

Complex Complex::operator-(const Complex &rhs) const {
    cout<<"\nOdejmowanie wektorow"<<endl;
    return {x - rhs.x, i - rhs.i};
}

Complex Complex::operator~() const {
    cout<<"\nWektor przeciwny"<<endl;
    return {-x, -i};
}

Complex Complex::operator*(double skalar) {
    cout<<"\nMnozenie przez skalar"<<endl;
    return {x*skalar, i*skalar};
}

double Complex::operator%(const Complex &rhs) {
    return x*rhs.x+(-1)*i*rhs.i;
}

bool Complex::operator^(const Complex &rhs) {
    cout<<"\nPorownanie liczb:"<<endl;
    if(x == rhs.x && i == rhs.i)
        return true;
    else
        return false;
}

void print_complex(Complex& complex)
{
    if(complex.i>0)
        cout<<"\tliczba = "<< complex.x <<" + "<< complex.i <<"i"<<endl;
    else if(complex.i==0)
        cout<<"\tliczba = "<< complex.x <<endl;
    else
        cout<<"\tliczba = "<< complex.x <<" "<< complex.i <<"i"<<endl;
}

Complex operator*(const double &lhs, const Complex &rhs)
{
    cout<<"\nMnozenie przez skalar"<<endl;
    return {lhs*rhs.x, lhs*rhs.i};
}

ostream& operator<<(ostream& lhs, const Complex& rhs) {
    if(rhs.i>0)
        lhs << "liczba = " << rhs.x << " + " << rhs.i << "i";
    else if(rhs.i==0)
        lhs << "liczba = " << rhs.x ;
    else
        lhs << "liczba = " << rhs.x << " " << rhs.i << "i";
    return lhs;
}