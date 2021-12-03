#include "poliformizm.h"

int main()
{
    Figure *kolo= new Circle(5);
    Figure *prostokat = new Rectangle(2,3);

    cout<<"Pole kola = "<<kolo->getArea()<<endl;
    cout<<"Pole prostokata = "<<prostokat->getArea()<<endl;

}