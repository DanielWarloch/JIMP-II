//
// Created by danwa on 09-Apr-19.
//

#include "complex.h"

void Complex::output() {
    if (imag < 0)
        std::cout << "Output Complex number: " << real << " " << imag << "i" << std::endl;
    else
        std::cout << "Output Complex number: " << real << " +" << imag << "i" << std::endl;
}

Complex Complex::operator/(Complex c2) {
    float div = (c2.real * c2.real) + (c2.imag * c2.imag);
    Complex temp;
    temp.real = (real * c2.real) + (imag * c2.imag);
    temp.real /= div;
    temp.imag = (real * c2.real) - (imag * c2.imag);
    temp.imag /= div;
    return temp;
}

Complex Complex::operator*(Complex c2) {
    Complex temp;
    temp.real = real * c2.real - imag * c2.imag;
    temp.imag = real * c2.real + imag * c2.imag;
    return temp;
}

Complex Complex::operator+(Complex c2) {
    Complex temp;
    temp.real = real + c2.real;
    temp.imag = imag + c2.imag;
    return temp;
}

Complex Complex::operator-(Complex c2) {
    Complex temp;
    temp.real = real - c2.real;
    temp.imag = imag - c2.imag;
    return temp;
}

void Complex::input() {
    std::cout << "Enter real and imaginary parts respectively: ";
    std::cin >> real;
    std::cin >> imag;
}
