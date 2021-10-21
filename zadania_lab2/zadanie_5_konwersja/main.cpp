#include "header.h"

int main() {

    char* ciag = new char[32];
    cin>>ciag;

    try {
        cout <<"Poprawnie wprowadzona liczba! Jest to: "<<zamiana(ciag);
    }
    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }
    cout << endl;
    return 0;
}