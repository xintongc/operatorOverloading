#include <iostream>
#include "Rational.h"
using namespace std;

int main() {

    Rational a(5,6);
    Rational b(2,3);
    Rational c(1,2);
    Rational d = a.add(b.add(c));

    a.print();
    d.print();

    Rational e = a + b + c;
    e.print();



    return 0;
}