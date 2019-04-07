//
// Created by Daniel Warloch on 26-Mar-19.

#ifndef JIMP_EXERCISES_GEOMETRY_H
#define JIMP_EXERCISES_GEOMETRY_H


class Point{
private:
    int x;
    int y;
public:
    Point();
    ~Point();
    void wczytaj();
    void wypisz();
    int getX();
    int getY();

};


class Square{
private:
    Point points[4];
    int obw;
    int area_value;
public:
    Square();
    ~Square();
    void wczytaj();
    void wypisz();
    void wypisz_area_obw();
    void area();
    void circumference();
};


#endif //JIMP_EXERCISES_GEOMETRY_H
