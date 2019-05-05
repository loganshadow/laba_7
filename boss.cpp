//
// Created by mikh- on 06.05.2019.
//

#include <iostream>
#include "boss.h"
boss::boss(std::string name, std::string surname, std::string midname, int age, int number_of_workers):
    human(name, surname, midname, age), number_of_workers(number_of_workers) {}

void boss::print(){
    std::cout << "boss info:" << std::endl
    << name << std::endl
    << surname << std::endl
    << midname << std::endl
    << age << std::endl
    << number_of_workers << std::endl;
}