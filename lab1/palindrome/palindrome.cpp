//
// Created by Daniel Warloch on 27-Mar-19.
//

#include "palindrome.h"

bool is_palindrome(std::string str){
    for (int i = 0; i < str.length(); ++i) {
        if (str.c_str()[i] != str.c_str()[str.length()-i-1]){
            return false;
        }
    }
    return true;
}
