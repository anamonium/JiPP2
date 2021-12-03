#include "notatka.h"

int main() {

    Note* Biologia = new TextNote("Biologia", "");

    cout << Biologia->getContent() << endl;

    Biologia->setContent();
    cout << "Tytul notatki: " << Biologia->getTitle()<<endl;
    cout << Biologia->getContent() << endl;


    return 0;
}