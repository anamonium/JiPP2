#include "triangle.h"

/*Triangle::Triangle(Node a, Node b, Node c, string nazwa): a(a),b(b),c(c),nazwa(nazwa){};
void Triangle::display() {
    cout<<"Trojkat "<<nazwa
    <<"\n\tP1: x = "<< a.x<<"\ty = "<<a.y
    <<"\n\tP2: x = "<<b.x<<"\ty = "<<b.y
    <<"\n\tP3: x = "<<c.x<<"\ty = "<<c.y<<endl;
}*/

Triangle::Triangle(Node a, Node b, Node c, string nazwa) {
    tab[0]=a;
    tab[1]=b;
    tab[2]=c;
    this->nazwa=nazwa;
}
ostream& operator<<(ostream& lhs, const Triangle& rhs) {
    lhs<<"Trojkat "<<rhs.nazwa
    <<"\n\tP1: x = "<<rhs.tab[0].x<<"\ty = "<<rhs.tab[0].y
    <<"\n\tP2: x = "<<rhs.tab[1].x<<"\ty = "<<rhs.tab[1].y
    <<"\n\tP3: x = "<<rhs.tab[2].x<<"\ty = "<<rhs.tab[2].y;
    return lhs;
}

void Triangle::display() {
    cout<<"\nTrojkat o nazwie: "<<nazwa
    <<"\n\tW1: x = "<<tab[0].x<<"\ty = "<<tab[0].y
    <<"\n\tW2: x = "<<tab[1].x<<"\ty = "<<tab[1].y
    <<"\n\tW3: x = "<<tab[2].x<<"\ty = "<<tab[2].y<<endl;
}

double Triangle::distance(int firstPointIndex, int secondPointIndex)
{
    if(firstPointIndex<0 || firstPointIndex>2 || secondPointIndex<0 || secondPointIndex>2)
        return 0;
    else {
        double odleglosc = sqrt(pow((tab[firstPointIndex].x - tab[secondPointIndex].x), 2) +
                                pow((tab[firstPointIndex].y - tab[secondPointIndex].y), 2));
        return odleglosc;
    }
}

//funkcja ponizej nie dziala
/*void showTriangleData(Triangle triangle)
{
    triangle.display();
}*/
void showTriangleData(Triangle &triangle)
{
    triangle.display();
}
void showTriangleData(Triangle *triangle)
{
    triangle->display();
}