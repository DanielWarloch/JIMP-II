//
// Created by Daniel Warloch on 05-Apr-19.
//

#ifndef JIMP_EXERCISES_ARRAY2D_H
#define JIMP_EXERCISES_ARRAY2D_H

#include <iostream>


std::pair<int, int> ask_for_size();
int** Array2D(int n_rows, int n_columns);
void DeleteArray2D(int** array, int n_rows, int n_columns);
void fill_array(int** array, int n_rows, int n_columns);
void display_array(int** array, int n_rows, int n_columns);

#endif //JIMP_EXERCISES_ARRAY2D_H
