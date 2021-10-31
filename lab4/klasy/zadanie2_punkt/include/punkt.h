#include <iostream>
#include <math.h>

using namespace std;

struct punkt{
    double x,y;
};

class Punkt{
public:
    punkt a,b;
    Punkt();
    double odleglosc();
};