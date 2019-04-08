//
// Created by danwa on 08-Apr-19.
//

#include "polybius.h"

std::string PolybiusCrypt(std::string message) {
    std::string message_crypted;
    for (char character: message)
        message_crypted+= EncodeChar(character);
    return message_crypted;
}

std::string PolybiusDecrypt(std::string crypted) {
    std::string message_decrypted;

    for (unsigned int i = 0; i <= (crypted.length()/2); ++i)
        message_decrypted += DecodeToken(crypted.substr(2*i, 2));

    return message_decrypted;
}

std::string EncodeChar(char character){
    int row = 1;
    int col = 1;
    std::string alphabet = "abcdefghiklmnopqrstuvwxyz";

    character = std::tolower(character);

    if (character == 'i' || character == 'j')
        return "24";
    for (char letter: alphabet) {
        if (letter == character)
            return std::to_string(row) + std::to_string(col);
        if (col == 5){
            col = 1;
            ++row;
        }else{
            ++col;
        }
    }
    return "";
}

std::string DecodeToken(std::string Token) {
    int row = 1;
    int col = 1;
    std::string alphabet = "abcdefghiklmnopqrstuvwxyz";

    for (char letter: alphabet) {
        if (std::to_string(row) + std::to_string(col) == Token)
            return std::string(1, letter);
        if (col == 5){
            col = 1;
            ++row;
        } else {
            ++col;
        }
    }
    return "";
}