//
// Created by danwa on 09-Apr-19.
//

#ifndef JIMP_EXERCISES_COMPLEX_H
#define JIMP_EXERCISES_COMPLEX_H

#include <iostream>


class Complex {
private:
    float real;
    float imag;
public:
    Complex() : real(0), imag(0) {
        input();
    }

    void input();

    void output();

    Complex operator-(Complex c2);

    Complex operator+(Complex c2);

    Complex operator*(Complex c2);

    Complex operator/(Complex c2);

};

#endif //JIMP_EXERCISES_COMPLEX_H
