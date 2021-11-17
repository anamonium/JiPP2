#include "vector.h"

Vector::Vector() {};

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

Vector Vector::operator+(const Vector &rhs) const {
    cout<<"\nDodawanie wektorow"<<endl;
    return {x + rhs.x, y + rhs.y};
}

Vector & Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const {
    cout<<"\nOdejmowanie wektorow"<<endl;
    return {x - rhs.x, y - rhs.y};
}

Vector Vector::operator~() const {
    cout<<"\nWektor przeciwny"<<endl;
    return {-x, -y};
}

Vector Vector::operator*(double skalar) {
    cout<<"\nMnozenie przez skalar"<<endl;
    return {x*skalar, y*skalar};
}

double Vector::operator%(const Vector &rhs) {
    return x*rhs.x+y*rhs.y;
}

bool Vector::operator^(const Vector &rhs) {
    cout<<"\nPorownanie wektorow:"<<endl;
    if(x == rhs.x && y == rhs.y)
        return true;
    else
        return false;
}

void print_vector(Vector& wektor)
{
    cout<<"\tx = "<< wektor.x <<"\ty = "<< wektor.y <<endl;
}

ostream& operator<<(ostream& lhs, const Vector& rhs) {
    lhs << "x = " << rhs.x << "\ty = " << rhs.y << "i";
    return lhs;
}