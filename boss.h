//
// Created by mikh- on 06.05.2019.
//

#ifndef LABA_7_BOSS_H
#define LABA_7_BOSS_H
#include "human.h"
class boss: public human {
    int number_of_workers;
public:
    boss() {};
    boss( std::string name, std::string surname, std::string midname, int age, int number_of_workers);
    ~boss(){};
    virtual void print() override;
};

#endif //LABA_7_BOSS_H
