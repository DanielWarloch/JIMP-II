//
// Created by danwa on 09-Apr-19.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include <string>
#include "StudentYear.h"

namespace academia {

    class Student {
        std::string id;
        std::string first_name;
        std::string last_name;
        std::string program;
        academia::StudyYear year;
    public:
        Student() = default;

        Student(std::string Id, std::string First_name_i, std::string Last_name_i, std::string Program, int Year);

        static std::string GetId();

        static std::string GetFirstName();

        static std::string GetLastName();

        static std::string GetProgram();

        static std::string GetYear();
    };
}

#endif //JIMP_EXERCISES_STUDENT_H
