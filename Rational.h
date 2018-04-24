//
// Created by xintong cheng on 2018-04-24.
//
#include <iostream>
#ifndef OPERATOROVERLOAD_RATIONAL_H
#define OPERATOROVERLOAD_RATIONAL_H
using namespace std;




class Rational {
public:
    Rational(int numerator, int denominator);
    Rational();
    Rational(const Rational &r);
    int numerator;
    int denominator;
    const Rational add(const Rational& r) const;
    void print();

    Rational operator+(const Rational& a) const;
    Rational& operator++();
    Rational operator++(int);
    operator double();
    const Rational& operator=(const Rational &r);
};




#endif //OPERATOROVERLOAD_RATIONAL_H
