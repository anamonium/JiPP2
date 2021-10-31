#include <iostream>
#include <string>

using namespace std;

struct samochod{
    string marka;
    string model;
    string kolor;
    int rok;
};

struct liczba{
    string marka;
    int ilosc;
};

void takie_same(samochod *tablica, liczba *same_car,int n);
void najnizszy_rok(samochod *tablica, int n );

int main()
{
    int n;
    samochod tablica[5]={{"mercedes","gls","bialy",2020},
                         {"bmw","x7","czarny",2018},
                         {"tesla","model X","szary",2021},
                         {"bmw","RS","srebrny",2019},
                         {"tesla","cayman","czerwony",2017}};

    n=sizeof(tablica) / sizeof(samochod);

    for (int i = 0; i < n; ++i)
    {
       cout<<"\n\nSamochod numer: "<<i+1;
       cout<<"\n\tMarka: "<<tablica[i].marka
       <<"\n\tModel: "<<tablica[i].model
       <<"\n\tKolor: "<<tablica[i].kolor
       <<"\n\tRok produkcji: "<<tablica[i].rok;
    }

    liczba spis_pojazdow[n];
    takie_same(tablica,spis_pojazdow,n);
    najnizszy_rok(tablica,n);
}

void takie_same(samochod *tablica, liczba *same_car,int n)
{
    int index_licznika=0;
    bool flaga;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (tablica[i].marka == same_car[j].marka)
            {
                same_car[j].ilosc++;
                flaga = 1;
            }
        }
        if (flaga == 0)
        {
            same_car[index_licznika].ilosc= 1;
            same_car[index_licznika].marka = tablica[i].marka;
            index_licznika++;
        }
        flaga = 0;
    }

    cout<<"\n\nSamochody tej samej marki oraz ich ilosc to:\n";
    for (int i = 0; i < index_licznika; i++) {
        if (same_car[i].ilosc > 1)
            cout <<"Model: "<<same_car[i].marka << "\tIlosc: " << same_car[i].ilosc << "\n";
    }
}

void najnizszy_rok(samochod *tablica, int n )
{
    int najnizszy,indeks=0;
    najnizszy=tablica[0].rok;

    for(int i=1;i<n;++i)
    {
        if(tablica[i].rok<indeks)
        {
            najnizszy=tablica[i].rok;
            indeks=i;
        }
    }

    cout<<"\nSamochod o najnizszym roku produkcji to:"
            <<"\n\tMarka: "<<tablica[indeks].marka
            <<"\n\tModel: "<<tablica[indeks].model
            <<"\n\tKolor: "<<tablica[indeks].kolor
            <<"\n\tRok produkcji: "<<tablica[indeks].rok;
}
