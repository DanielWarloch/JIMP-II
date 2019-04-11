//
// Created by danwa on 11-Apr-19.
//

#ifndef JIMP_EXERCISES_STUDENTYEAR_H
#define JIMP_EXERCISES_STUDENTYEAR_H


namespace academia {

    class StudyYear {
        int value_;
    public:
        explicit StudyYear(int value = 0);

        StudyYear &operator++();

        StudyYear &operator--();

        bool operator>(StudyYear &other);

        bool operator<(StudyYear &other);

        bool operator==(StudyYear &other);

        bool operator>=(StudyYear &other);

        bool operator<=(StudyYear &other);

        int get_value();
    };
}


#endif //JIMP_EXERCISES_STUDENTYEAR_H
