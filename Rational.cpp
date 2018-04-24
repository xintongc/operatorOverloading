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


// prefix increment operator
Rational& Rational::operator++(){
    numerator = numerator + denominator;
    return *this;
}

// postfix increment operator
//Note: postfix operator uses a dummy int parameter
Rational Rational::operator++(int){
    Rational temp = *this;
    numerator = numerator + denominator;
    return temp;
}


Rational::operator double(){
    return numerator / (double)denominator;
}

const Rational& Rational::operator=(const Rational &r){
    numerator = r.numerator;
    denominator = r.denominator;
    return *this;
}

//const Rational& Rational::operator=(const Rational& r){
//    if (&r != this){
//        delete numerator;
//        delete denominator;
//        (int*)numerator = new int (r.numerator);
//        (int*)denominator = new int (r.denominator);
//    }
//
//    return *this;
//}