#include "kula.h"

int Kula::getR() {
    return r;
}

int Kula::setR(int r) {
    this->r=r;
}

void Kula::get_data() {
    cout<<"Podaj promien kuli: r = ";
    cin>>r;
}
 double Kula::objetosc(){
    double v;
    v=3,14*r*r*r;
    return v;
}
