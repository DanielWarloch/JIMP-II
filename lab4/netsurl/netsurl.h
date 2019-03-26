//
// Created by Daniel Warloch on 26-Mar-19.
//
#include <string>
#include <cstdint>
#include <iostream>
#ifndef JIMP_EXERCISES_NETSURL_H
#define JIMP_EXERCISES_NETSURL_H


class SimpleUrl{
    std::string Login() const;
    std::string Host() const;
    std::string Path() const;
    uint16_t Port() const;
    std::string Scheme() const;
    std::string Query() const;
    std::string Fragment() const;
};















#endif //JIMP_EXERCISES_NETSURL_H
