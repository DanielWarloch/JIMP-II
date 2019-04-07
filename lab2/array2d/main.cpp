//
// Created by Daniel Warloch on 05-Apr-19.
//
#include "Array2D.h"


int main(){
    auto size = ask_for_size();
    auto ptr = Array2D(size.first, size.second);
    fill_array(ptr,size.first, size.second);
    display_array(ptr,size.first, size.second);
    DeleteArray2D(ptr,size.first, size.second);

}
