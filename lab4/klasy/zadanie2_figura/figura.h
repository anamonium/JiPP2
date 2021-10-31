#include <iostream>

using namespace std;

struct punkt{
    double x,y;
};

class Figura{
public:
    int liczba_wierzcholkow;
    punkt *tab;
    Figura();
    void print_figura();
};
