//
// Created by xintong cheng on 2018-04-24.
//
#include <iostream>
#include "Rational.h"
using namespace std;

const Rational Rational::add(const Rational& r) const {
    int n = numerator * r.denominator + denominator * r.numerator;
    int d = denominator * r.denominator;
    return Rational(n, d);
}

Rational::Rational(int n, int d){
    numerator = n;
    denominator = d;
}

Rational::Rational(){
    numerator = 0;
    denominator = 1;
}
Rational::Rational(const Rational &r){};

void Rational::print(){
    cout << numerator << "/" << denominator << endl;
}
Rational Rational::operator+(const Rational& a) const {
    Rational sum;
    sum.numerator = a.numerator * denominator + a.denominator * numerator;
    sum.denominator = a.denominator * denominator;
    return sum;
}