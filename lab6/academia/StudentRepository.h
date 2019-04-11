//
// Created by danwa on 11-Apr-19.
//

#ifndef JIMP_EXERCISES_STUDENTRESPOSITORY_H
#define JIMP_EXERCISES_STUDENTRESPOSITORY_H

#include <vector>
#include "Student.h"
#include "StudentYear.h"

namespace academia {
    class StudentRepository {
    private:
        std::vector<academia::Student> StudentDataBase;


    public:
        Student operator[](std::string);

    };
}

#endif //JIMP_EXERCISES_STUDENTRESPOSITORY_H
