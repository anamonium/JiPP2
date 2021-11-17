#include <iostream>
#include <math.h>

using namespace std;

struct Node{
    int x,y;
};

class Triangle{
    friend ostream& operator<<(ostream& lhs, const Triangle& rhs);
private:
    Node tab[3];
    string nazwa;
public:
    void display();//funkcja wyswietlajaca info o trojkacie
    Triangle();
    Triangle(Node a, Node b, Node c, string nazwa);
    double distance(int firstPointIndex, int secondPointIndex);
};

//void showTriangleData(Triangle triangle); nie dziala
void showTriangleData(Triangle &triangle);
void showTriangleData(Triangle *triangle);