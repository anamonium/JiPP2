#include <iostream>
using namespace std;

void addition(int a, int b)
{
    cout<<"Wynik: "<<a<<" + "<<b<<" = "<< a+b<<"\n";
}

void subtraction(int a, int b)
{
    cout<<"Wynik: "<<a<<" - "<<b<<" = "<< a-b<<"\n";
}

void volume(int a, int b, int c, int d)
{
    int objetosc;
    objetosc = (a+b)*c*d/2;
    cout<<"Wynik: ( "<<a<<" + "<<b<<" ) * "<<c<<" * "<<d<<" / 2 = "<<objetosc<<"\n";
}

void help()
{
    cout<<"\nSimpleCalc App\n"
        << "Dzialania:\n\n add [a] [b]\n\tDodawanie dwoch liczb calkowitych [a] i [b]"
        <<"\n\n subtract [a] [b]\n\tOdejmowanie dwoch liczb calkowitych [a] i [b]"
        <<"\n\n volume [a] [b] [c] [d]\n\tLiczenie objetosci graniastoslupa o podstawie trapezu, "
        <<"\n\tgdzie [a] i [b] to dlugosci podstaw trapezu, [c] to wysokosc podstawy, "
        <<"\n\ta [d] to wysokosc graniastoslupa\n"
        <<"\n\n help\n\tWyswietla dokumentacje programu\n";
}
