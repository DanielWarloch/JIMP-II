//
// Created by Daniel Warloch on 05-Apr-19.
//

#include "Array2D.h"

#include <iostream>
#include <utility>
#include <memory>

std::pair<int, int> ask_for_size() {
    std::cout<<"Podaj rozmiar taclicy do utworzenia w formacie x y:"<<std::endl;
    std::pair<int, int> size;
    std::cin>>size.first;
    std::cin>>size.second;
    return size;
}



int **Array2D(int n_rows, int n_columns) {
    if(n_columns == 0 || n_rows == 0)
        return nullptr;
    else {
        int** rows = new int* [n_rows];
        for (int i = 0; i < n_rows; ++i) {
            rows[i] = new int [n_columns];
        }
        fill_array(rows, n_rows, n_columns);
        return rows; }
}

void DeleteArray2D(int** array, int n_rows, int n_columns) {
    for (int i = 0; i < n_columns; ++i) {
        delete array[i];
        }
    delete array;
}

void display_array(int** array, int n_rows, int n_columns) {
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns ; ++j) {
            std::cout<< array[i][j] << "\t";
        }
        std::cout<<std::endl;
    }
}

void fill_array(int** array, int n_rows, int n_columns) {
    int tmp = 1;
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns; ++j) {
            array[i][j] = tmp;
            ++tmp;
        }
    }
}





