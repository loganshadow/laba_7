//
// Created by mikh- on 06.05.2019.
//

#ifndef LABA_7_STUDENT_H
#define LABA_7_STUDENT_H
#include "Human.h"
class student: public human
{
private:
    bool on_lesson;
public:
    student() {}
    student(std::string name, std::string surname, std::string midname, int age, bool on_lesson);
    ~student() {}
    void print() override;
};

#endif //LABA_7_STUDENT_H
