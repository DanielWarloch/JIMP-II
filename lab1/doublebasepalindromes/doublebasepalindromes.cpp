//
// Created by Daniel Warloch on 27-Mar-19.
//

#include <bitset>
#include "doublebasepalindromes.h"
#include <iostream>


std::string decToBinary(int n) {
    // array to store binary number
    int binaryNum[1000];
    std::string binarka;
    // counter for binary array
    int i = 0;
    while (n > 0) {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        binarka.push_back(binaryNum[j]);
    }
    return binarka;
}


bool is_palindrome1(std::string str){
    for (int i = 0; i < str.length(); ++i) {
        if (str.c_str()[i] != str.c_str()[str.length()-i-1]){
            return false;
        }
    }
    return true;
}


uint64_t DoubleBasePalindromes(int max_value_exculsive){
    uint64_t suma = 0;
    for (int i = 0; i <= max_value_exculsive ; ++i) {
        if (is_palindrome1(std::to_string(i))){
            if (is_palindrome1(decToBinary(i))){
                suma += i;
            }
        }
    }
    return suma;
}


