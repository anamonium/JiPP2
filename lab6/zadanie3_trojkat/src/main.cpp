#include "triangle.h"

int main() {

    Node a, b{5,8},c{1,16};

    Triangle triangle(a, b, c, "First Triangle");

    triangle.display();
    cout << triangle << endl;

    cout << "\nDistance between second and third point is " << triangle.distance(1,2) << endl;

   // showTriangleData(triangle); ta funkcja nie dziala
    showTriangleData(&triangle);
    showTriangleData(&triangle);
}

