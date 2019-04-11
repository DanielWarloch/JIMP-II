//
// Created by danwa on 09-Apr-19.
//
#include <iostream>
#include "StudentYear.h"

int main() {
    auto a = academia::StudyYear(2);
    std::cout << a.get_value();
}