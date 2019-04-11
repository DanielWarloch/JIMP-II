//
// Created by danwa on 11-Apr-19.
//

#include "StudentYear.h"


academia::StudyYear &academia::StudyYear::operator++() {
    this->value_++;
}

academia::StudyYear &academia::StudyYear::operator--() {
    this->value_++;
}

bool academia::StudyYear::operator>(academia::StudyYear &other) {
    return this->value_ > other.value_;
}

bool academia::StudyYear::operator<(academia::StudyYear &other) {
    return this->value_ < other.value_;
}

bool academia::StudyYear::operator==(academia::StudyYear &other) {
    return this->value_ == other.value_;
}

bool academia::StudyYear::operator>=(academia::StudyYear &other) {
    return this->value_ >= other.value_;
}

bool academia::StudyYear::operator<=(academia::StudyYear &other) {
    return this->value_ <= other.value_;
}

int academia::StudyYear::get_value() {
    return this->value_;
}

academia::StudyYear::StudyYear(int value) {
    this->value_ = value;
}
