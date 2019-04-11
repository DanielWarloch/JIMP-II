//
// Created by danwa on 09-Apr-19.
//

#include "Student.h"


academia::Student::Student(std::string Id, std::string First_name_i, std::string Last_name_i, std::string Program,
                           int Year) {
    this->id = std::move(Id);
    this->first_name = std::move(First_name_i);
    this->last_name = std::move(Last_name_i);
    this->program = std::move(Program);
    this->year = StudyYear(Year);
}
