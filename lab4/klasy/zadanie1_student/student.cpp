#include "student.h"

string Student::getImie() {
    return imie;
}

string Student::getNazwisko() {
    return nazwisko;
}

int Student::getNr_albumu() {
    return nr_albumu;
}

int Student::getL_pytan() {
    return l_pytan;
}

int Student::getPop_odp() {
    return pop_odp;
}

void Student::setImie(string imie) {
    this->imie = imie;
}

void Student::setNazwisko(string nazwisko) {
    this->nazwisko = nazwisko;
}

void Student::setNr_albumu(int numerAlbumu) {
    this->nr_albumu=nr_albumu;
}

void Student::setL_pytan(int liczbaPytan) {
    this->l_pytan=l_pytan;
}

void Student::setPop_odp(int poprawneOdpowiedzi) {
    this->pop_odp=pop_odp;
}

void Student::get_data() {
    cout<<"Podaj dane studenta\nImie: ";
    cin>> imie;
    cout<<"Nazwisko: ";
    cin>>nazwisko;
    cout<<"Numer albumu: ";
    cin>>nr_albumu;
    cout<<"Liczba pytan: ";
    cin>> l_pytan;
    cout<<"Liczba poprawnych odpowiedzi: ";
    cin>> pop_odp;
}

void Student::procentage() {
    int wynik;
    wynik=100*pop_odp/l_pytan;
    cout<<"Wynik procentowy = "<<wynik<<" %"<<endl;
}
