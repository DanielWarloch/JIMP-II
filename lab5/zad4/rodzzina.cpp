//
// Created by Daniel Warloch on 02-Apr-19.
//

#include "rodzzina.h"


rodzic::rodzic(string a, string b, int c){
    imie = a;
    nazwisko = b;
    wiek = c;
}


void dziecko::wypisz() {
    std::cout<<imie<<endl;
    std::cout<<nazwisko<<endl;
    std::cout<<wiek<<endl;
    std::cout<<szkola<<endl;
}


rodzic::rodzic(int syn) : syn(syn) {}
