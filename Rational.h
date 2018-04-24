//
// Created by xintong cheng on 2018-04-24.
//

#ifndef OPERATOROVERLOAD_RATIONAL_H
#define OPERATOROVERLOAD_RATIONAL_H


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
};


#endif //OPERATOROVERLOAD_RATIONAL_H
