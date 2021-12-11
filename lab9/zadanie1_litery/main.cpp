#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> litery;
    string wyr1;
    list<string>::iterator x;

    cout<<"Podaj slowo do zamiany"<<endl;
    cin>>wyr1;
    litery.emplace_back(wyr1);

    for (x = litery.begin(); x != litery.end(); ++x) {
        for (char& c : (*x))
            c = toupper(c);
    }

    cout << "Duże litery: " << endl;
    for (x = litery.begin(); x != litery.end(); ++x)
        cout << (*x) << " " << endl;

    return 0;

}