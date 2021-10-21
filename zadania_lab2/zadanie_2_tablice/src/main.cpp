#include "header.h"


int main()
{

    srand(time(nullptr));

    cout<<"Podaj rozmiar tablicy\na = ";
    int a,*tab;
    cin>>a;
    tab=new int[a];

    fill_array(tab,a);
    cout<<"Tablica: \n";
    print_array(tab,a);
    cout<<"\n\n";

    cout<<"Najwieksza wartosc z tablicy: "<<max_z_tablicy(tab,a)<<"\n\n";

    odwrocenie(tab,a);
    cout<<"Tablica odwrocona: \n";
    print_array(tab,a);
    cout<<"\n\n";

}
