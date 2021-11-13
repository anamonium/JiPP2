#include <iostream>
#include <string>

using namespace std;

struct miejsce{
    string dane;
};

class Pojazd{
private:
    string nr_rej, nazwa, marka, typ;
    miejsce* pasazer;
    int ilosc_miejsc;
    static string najnowszaWersjaOprogramowania;
    string zainstalowanaWersjaOprogramowania;

public:
    Pojazd();
    void print_info();
    void change_data(int nr_miejsca, miejsce dane);
    Pojazd(Pojazd& pojazd);
    ~Pojazd();
    string getNazwa();
    string getNrRej();
    string getMarka();
    string getTyp();
    void setNazwa(string Nazwa);
    void setNrRej(string Nr_Rej);
    void wypiszWerOpro();
    void zaktuaWerOpro();
    static void opublikujNowOprog(string wersja);

};