#include "pojazd.h"

Pojazd::Pojazd() {
    cout<<"Wprowadz dane na temat pojazdu\n"
    <<"Numer rejestracyjny: ";
    cin>>nr_rej;
    cout<<"Nazwa: ";
    cin>>nazwa;
    cout<<"Marka: ";
    cin>>marka;
    cout<<"Typ: ";
    cin>>typ;
    cout<<"Ilosc miejsc: ";
    cin>>ilosc_miejsc;
    pasazer=new miejsce[ilosc_miejsc];
    zainstalowanaWersjaOprogramowania="v1.0";
    for(int i=0;i<ilosc_miejsc;++i)
        pasazer[i].dane="puste";

}
void Pojazd::print_info() {

        cout<<"Numer rejestracyjny pojazdu: "<<nr_rej
            <<"\nNazwa pojazdu: "<<nazwa
            <<"\nMarka pojazdu: "<<marka
            <<"\nTyp pojazdu: "<<typ
            <<"\nIlosc miejsc: "<<ilosc_miejsc<<endl;

        if(ilosc_miejsc>0)
        {
            for(int i=0;i<ilosc_miejsc;i++)
                cout<<"\tnr "<<i+1<<" : "<<pasazer[i].dane<<"\n";
        }

}

void Pojazd::change_data(int nr_miejsca, miejsce dane_pas) {
    if(nr_miejsca<1 || nr_miejsca>ilosc_miejsc)
        cout<<"Podano niepoprawny numer miejsca";
    else
        pasazer[nr_miejsca-1].dane=dane_pas.dane;
}

Pojazd::Pojazd(Pojazd &pojazd) {
    nr_rej=pojazd.nr_rej;
    nazwa=pojazd.nazwa;
    marka=pojazd.marka;
    typ=pojazd.typ;
    ilosc_miejsc=pojazd.ilosc_miejsc;
    pasazer=new miejsce[ilosc_miejsc];
    zainstalowanaWersjaOprogramowania=pojazd.zainstalowanaWersjaOprogramowania;
    for(int i=0;i<ilosc_miejsc;++i)
        pasazer[i].dane=pojazd.pasazer[i].dane;
}

Pojazd::~Pojazd() {
    delete[] pasazer;
    pasazer= nullptr;
}

string Pojazd::getMarka() {
    return marka;
}

string Pojazd::getNazwa() {
    return nazwa;
}

string Pojazd::getNrRej() {
    return nr_rej;
}

string Pojazd::getTyp() {
    return typ;
}

void Pojazd::setNazwa(string Nazwa) {
    this->nazwa=Nazwa;
}

void Pojazd::setNrRej(string Nr_Rej) {
    this->nr_rej=Nr_Rej;
}

void Pojazd::wypiszWerOpro() {
    cout << "Zainstalowana wersja oprogramowania: " << zainstalowanaWersjaOprogramowania << endl;
}

void Pojazd::opublikujNowOprog(string wersja) {
    najnowszaWersjaOprogramowania = wersja;
}

void Pojazd::zaktuaWerOpro() {
    zainstalowanaWersjaOprogramowania = najnowszaWersjaOprogramowania;
}