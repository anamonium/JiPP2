#include <iostream>
#include <math.h>

using namespace std;

class Node{
private:
    double x,y;

public:
    Node();
    Node(double x, double y);
    void display();
    void updateValue(double x, double y);
    friend double pointsDistance(Node&, Node&);
};
