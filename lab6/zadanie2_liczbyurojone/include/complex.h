#include <iostream>
#include <math.h>

using namespace std;

class Complex{
private:
    double x,i;
public:
    Complex();

    Complex(double x, double i);

    double length();

    Complex operator+(const Complex &rhs) const; //dodawanie

    Complex operator-(const Complex &rhs) const; //odejmowanie

    Complex operator~()const; //wektor przeciwny

    Complex operator*(double skalar); //mnozenie przez skalar

    double operator%(const Complex &rhs); //iloczyn skalarny

    bool operator^(const Complex &rhs); //sprawdzenie czy wektory sa rowne

    Complex &operator+=(const Complex &rhs);

    friend void print_complex(Complex&);

    friend Complex operator*(const double &lhs, const Complex &rhs);
    friend ostream& operator<<(ostream& lhs, const Complex& rhs);
};
