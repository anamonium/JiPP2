#include <iostream>
#include <math.h>

using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    Vector operator+(const Vector &rhs) const; //dodawanie

    Vector operator-(const Vector &rhs) const; //odejmowanie

    Vector operator~()const; //wektor przeciwny

    Vector operator*(double skalar); //mnozenie przez skalar

    double operator%(const Vector &rhs); //iloczyn skalarny

    bool operator^(const Vector &rhs); //sprawdzenie czy wektory sa rowne

    Vector &operator+=(const Vector &rhs);

    friend void print_vector(Vector&);

    friend ostream& operator<<(ostream& lhs, const Vector& rhs);
};