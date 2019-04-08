//
// Created by Daniel Warloch on 05-Apr-19.
//
#include "Array2D.h"


int main(){
    auto size = ask_for_size();
    auto arr = Array2D(size.first, size.second);
    FillArray2D(size.first, size.second, arr);
    display_array(arr,size.first, size.second);
    DeleteArray2D(arr,size.first, size.second);

}
