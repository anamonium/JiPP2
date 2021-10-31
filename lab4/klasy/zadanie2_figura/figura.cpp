#include "figura.h"

Figura::Figura() {
    cout<<"Podaj ilosc wierzcholkow figury: n = ";
    cin>>liczba_wierzcholkow;
    tab=new punkt[liczba_wierzcholkow];

    for(int i=0;i<liczba_wierzcholkow;++i)
    {
        cout<<"Wspolrzedne wierzcholka nr. "<<i+1<<"\nx = ";
        cin>>tab[i].x;
        cout<<"y = ";
        cin>>tab[i].y;
    }
}

void Figura::print_figura() {
    for(int i=0;i<liczba_wierzcholkow;++i)
    {
        cout<<"\nWierzcholek nr. "<<i+1
        <<"\n\tx = "<<tab[i].x;
        cout<<"\n\ty = "<<tab[i].y<<"\n";
    }
}
