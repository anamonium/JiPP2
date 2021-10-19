#include "header.h"

int main()
{
    cout<<"Podaj figure, ktorej pole chcesz obliczyc\n"
        <<"1 - kwadrat\n"
        <<"2 - prostokat\n"
        <<"3 - trapez \n";

    int wybor, a,b,c;
    cin>>wybor;
    switch(wybor)
    {
        case 1:
            cout<<"Podaj dlugosc boku kwadratu\na = ";
            cin>>a;
            cout<<"P = "<<pole(a)<<"\n";
            break;
        case 2:
            cout<<"Podaj dlugosc bokow prostokatu\na = ";
            cin>>a;
            cout<<"b = ";
            cin>>b;
            cout<<"P = "<<pole(a,b)<<"\n";
            break;
        case 3:
            cout<<"Podaj dlugosc podstaw trapezu oraz jego wysokosc\na = ";
            cin>>a;
            cout<<"b = ";
            cin>>b;
            cout<<"h = ";
            cin>>c;
            cout<<"P = "<<pole(a,b,c)<<"\n";
            break;
        default:
            cout<<"Podano niepoprwna wartość\n";
            break;
    }
}
