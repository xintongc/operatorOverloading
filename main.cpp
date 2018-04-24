#include <iostream>
#include "Rational.h"
using namespace std;

ostream& operator<<(ostream &output, const Rational &r){
    output << r.numerator << "/" << r.denominator;
    return output;
}

istream& operator>>(istream &input, Rational &r){
    input >> r.numerator >> r.denominator;
    return input;
}

// operator+ as free operator
const Rational operator+(const Rational& a, const Rational& b) {
    Rational sum;
    sum.numerator = a.numerator * b.denominator + a.denominator * b.numerator;
    sum.denominator = a.denominator * b.denominator;
    return sum;
}

// operator+ as free operator
const Rational operator+(const Rational& a, const int& b_int) {
    Rational sum, b(b_int,1);
    sum.numerator = a.numerator * b.denominator + a.denominator * b.numerator;
    sum.denominator = a.denominator * b.denominator;
    return sum;
}

// operator+ as free operator
const Rational operator+(const int& a_int, const Rational& b) {
    Rational sum, a(a_int,1);
    sum.numerator = a.numerator * b.denominator + a.denominator * b.numerator;
    sum.denominator = a.denominator * b.denominator;
    return sum;
}

int main() {

    Rational a(5,6);
    Rational b(2,3);
    Rational c(1,2);
    Rational d = a.add(b.add(c));

    a.print();
    d.print();

//    Rational e = a + b + c;
//    e.print();

    a++;
    a.print();

    ++a;
    a.print();



    cout << a << endl << ++a << endl;

    cout << (float)b << endl;

    Rational f = a + 1;
    cout << f;



    return 0;
}