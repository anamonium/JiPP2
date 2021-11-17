#include "node.h"

double pointsDistance(Node& a, Node&b)
{
    double odleglosc;
    odleglosc = sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    return odleglosc;
}

Node::Node()
{
    cout<<"Podaj wspolrzedne punktu: "<<endl;
    cin>>x;
    cin>>y;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() {
    cout<<"x: "<<x<<"\ty: "<<y<<endl;
}

void Node::updateValue(double x, double y) {
    this->x=x;
    this->y=y;
}