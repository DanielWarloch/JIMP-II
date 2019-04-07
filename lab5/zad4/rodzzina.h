//
// Created by Daniel Warloch on 02-Apr-19.
//

#ifndef JIMP_EXERCISES_RODZZINA_H
#define JIMP_EXERCISES_RODZZINA_H

#include <iostream>
#include <string.h>
using namespace std;

class dziecko;
class rodzic {
public:
    rodzic(int syn);

private:
    string imie;
    string nazwisko;
    int wiek;
    syn = new dziecko(5);
public:




};





class dziecko {
    string imie;
    string nazwisko;
    int wiek;
    string szkola;
    friend rodzic;
public:
    dziecko(int);
    void przepisz_do_innej_szkoly(string nazwa);
    void wypisz();
};


#endif //JIMP_EXERCISES_RODZZINA_H
