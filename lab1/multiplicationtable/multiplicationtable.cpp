//
// Created by Daniel Warloch on 25-Mar-19.
//

#include <iostream>
#include "multiplicationtable.h"


void MultiplicationTable(int tab[][10]){
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            tab[i-1][j-1]=i*j;
        }
    }
}

void MultiplicationTable_Display(int tab[][10]){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout<<tab[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
}




