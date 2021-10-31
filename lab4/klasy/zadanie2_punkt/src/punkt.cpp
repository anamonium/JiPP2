#include "punkt.h"

Punkt::Punkt() {
    cout<<"Podaj wspolrzedne pierwszego punktu: x = ";
    cin>> a.x;
    cout<<"y = ";
    cin>>a.y;

    cout<<"\nPodaj wspolrzedne drugiego: x = ";
    cin>> b.x;
    cout<<"y = ";
    cin>>b.y;
}

double Punkt::odleglosc() {
    double odleglosc;
    odleglosc= sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
    return odleglosc;
}
