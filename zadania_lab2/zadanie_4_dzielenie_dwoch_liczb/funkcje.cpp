#include <stdexcept>
#include <iostream>

int podziel(int a, int b) {
    if (b == 0)
        throw invalid_argument("Nie mozna dzielic przez 0!");
    if (a % b != 0)
        throw invalid_argument("Te liczby nie daja wyniku calkowitego!");
    return a / b;
}