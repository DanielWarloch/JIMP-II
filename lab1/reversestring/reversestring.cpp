//
// Created by Daniel Warloch on 27-Mar-19.
//

#include "reversestring.h"
#include <string>

std::string reverse(std::string str){
    std::string reversed_characters;
    for (int i = 1; i <= str.length(); ++i) {
        reversed_characters.push_back(str.c_str()[str.length()-i]);
    }
    return std::string(reversed_characters);
}
