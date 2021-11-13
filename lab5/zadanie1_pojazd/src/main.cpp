#include "pojazd.h"

int main()
{
    miejsce nazwa;
    int numer_zmiany;

    Pojazd a;
    cout<<"\nDane pojazdu A: ";
    a.print_info();

    Pojazd b(a);
    cout<<"\nDane skopiowane do pojazdu B: ";
    b.print_info();

    cout<<"Podaj numer miejsca oraz dane ktore chcesz zmienic w pojedzie:\n\tNumer miejsca: ";
    cin>>numer_zmiany;
    cout<<"Dane pasazera: ";
    cin>>nazwa.dane;
    a.change_data(numer_zmiany,nazwa);
    cout<<"\nDane pojazdu A po zmianie: ";
    a.print_info();


    a.opublikujNowOprog("v2.0");
    a.wypiszWerOpro();
    cout<<"Uaktualnienie do wersji v2.0";
    a.zaktuaWerOpro();
    a.wypiszWerOpro();

}

