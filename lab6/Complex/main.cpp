//
// Created by danwa on 09-Apr-19.
//

#include "complex.h"

int main() {

    Complex c1;
    Complex c2;
    Complex c3;
    c1.output();
    c1.input();
    c2.input();
    c3 = c1 + c2;
    c3.output();
    c3 = c1 - c2;
    c3.output();
    c3 = c1 * c2;
    c3.output();
    c3 = c1 / c2;
    c3.output();


}