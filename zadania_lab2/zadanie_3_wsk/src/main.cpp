#include "naglowki.h"

int main()
{
    cout<<"Podaj zadanie ktore chcesz eykonac: \n"
        <<"1 - Program pobierajacy dwie liczby, liczacy ich srednia\n"
        <<"2 - Program wczytujacy elementy tablicy oraz wyswietlajacy elementy dodatnie\n"
        <<"3 - Program wpisujacy wartosc liczby x do wskaznika *w\n";

    int wybor;
    cin>>wybor;

    switch (wybor){
        case 1:
            srednia_dwoch_liczb();
            break;
        case 2:
            tablica();
            break;
        case 3:
            ostatnie();
            break;
        default:
            cout<<"Podano niepoprawny numer\n";
            break;
    }
}
