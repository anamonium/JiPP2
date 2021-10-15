#include "../include/calc.h"

int main(int argc, char** argv)
{

    string rodzaj;

    rodzaj=argv[1];

    if (rodzaj=="add" && argc==4)
    {
        cout<<"DODAWANIE\n";
        addition(stoi(argv[2]), stoi(argv[3]));
    }
    else if(rodzaj=="subtract" && argc==4)
    {
        cout<<"ODEJMOWANIE\n";
        subtraction(stoi(argv[2]), stoi(argv[3]));
    }
    else if(rodzaj=="volume" && argc==6)
    {
        cout<<"OBJETOSC\n";
        volume(stoi(argv[2]),stoi(argv[3]),stoi(argv[4]),stoi(argv[5]));
    }
    else if(rodzaj=="help" && argc==2)
    {
        help();
    }
    else
    {
        cout<<"\nWprowadzono niepoprawną ilość parametrow badz bledne dzialanie\n"
            <<"Przyjrzyj się dokumentacji i sprobuj ponownie\n";
        help();
    }

    return 0;
}
