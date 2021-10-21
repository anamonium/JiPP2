#include "include.h"


int main () {
    int a, b;
    cout<<"Podaj liczby:\na = ";
    cin >> a;
    cout<<"b = ";
    cin>>b;
    try {
        int c = podziel(a, b);
        cout << "\nWynik dzielenia:\n"
             <<"a/b = " << c;
    }
    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }
    cout << endl;

    return 0;
}