#include "klasa.h"

Klasa::Klasa() {
    tab=new char[1024];
    cout<<"Konstruktor wywolany\n";
}

void Klasa::pause() {
    system("PAUSE");
}

Klasa::~Klasa() {
    cout<<"\nDesytuktor wywolany";
    delete [] tab;
}
