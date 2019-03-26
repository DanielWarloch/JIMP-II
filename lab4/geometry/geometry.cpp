//
// Created by Daniel Warloch on 26-Mar-19.
//
#include <iostream>
#include "geometry.h"
#include <math.h>

using namespace std;


void Point::wczytaj() {
    cout<<"Podaj x: ";
    cin>>x;
    cout<<"Podaj y: ";
    cin>>y;
}
void Point::wypisz() {
    cout<<"X wynosi: "<< x << endl;
    cout<<"Y wynosi: "<< y << endl;
}
int Point::getX() {
    return x;
}int Point::getY() {
    return y;
}




void Square::wczytaj() {
    for (auto &point : points) {
        point.wczytaj();
    }
}

void Square::wypisz() {
    for (auto &point : points) {
        point.wypisz();
    }
}
void Square::wypisz_area_obw() {
    cout<<"Obw: "<< obw<<endl;
    cout<<"area: "<< area_value<<endl;
}



void Square::circumference() {
    obw = (points[1].getX() - points[0].getX())*4;
}

void Square::area() {
    area_value = (obw/4)*(obw/4);
}