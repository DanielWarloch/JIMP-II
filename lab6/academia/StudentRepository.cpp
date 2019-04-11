//
// Created by danwa on 11-Apr-19.
//

#include "StudentRepository.h"

academia::Student academia::StudentRepository::operator[](std::string id) {
    for (int i = 0; i < this->StudentDataBase.size(); ++i) {
        if (StudentDataBase[i].GetId() == id)
            return this->StudentDataBase[i];
    }
}
