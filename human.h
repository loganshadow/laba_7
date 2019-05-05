//
// Created by mikh- on 05.05.2019.
//

#ifndef LABA_7_HUMAN_H
#define LABA_7_HUMAN_H

#include "string"
class human{
protected:
    std::string name;
    std::string surname;
    std::string midname;
    int age;
public:
    human() {}
    human(std::string name, std::string surname, std::string midname, int age);
    ~human(){};
    virtual void print() = 0;
};

#endif //LABA_7_HUMAN_H
