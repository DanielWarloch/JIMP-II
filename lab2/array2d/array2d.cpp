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

int **NewArray2D(int n_rows, int n_columns) {
    if (n_columns <= 0 || n_rows <= 0)
        return nullptr;
    else {
        int **arr = new int *[n_rows];
        for (int i = 0; i < n_rows; ++i) {
            arr[i] = new int[n_columns];
        }

        return arr;
    }
}

int **Array2D(int n_rows, int n_columns) {
    auto arr = NewArray2D(n_rows, n_columns);
    FillArray2D(n_rows, n_columns, arr);
    return arr;
}

void DeleteArray2D(int** arr, int n_rows, int n_columns) {
    if (arr != nullptr){
    for (int i = 0; i < n_rows; ++i) {
        delete arr[i];
        }
    delete arr;
    }
}

void display_array(int** arr, int n_rows, int n_columns) {
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns ; ++j) {
            std::cout<< arr[i][j] << "\t";
        }
        std::cout<<std::endl;
    }
}

void FillArray2D(int n_rows, int n_columns, int** arr) {
    int tmp = 1;
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_columns; ++j) {
            arr[i][j] = tmp;
            ++tmp;
        }
    }
}






