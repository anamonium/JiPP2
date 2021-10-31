#include <iostream>

using namespace std;

class Student{
private:
    string imie,nazwisko;
    int nr_albumu,l_pytan,pop_odp;

public:
    string getImie();
    string getNazwisko();
    int getNr_albumu();
    int getL_pytan();
    int getPop_odp();
    void setImie(string imie);
    void setNazwisko(string nazwisko);
    void setNr_albumu(int nr_albumu);
    void setL_pytan(int l_pytan);
    void setPop_odp(int pop_odp);
    void get_data();
    void procentage();
};
