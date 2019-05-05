//
// Created by mikh- on 06.05.2019.
//

#include <iostream>
#include "student.h"
student::student(std::string name, std::string surname, std::string midname, int age, bool on_lesson):
human(surname, name, midname, age), on_lesson(on_lesson) {}

void student::print() {
    std::cout << "student info:" << std::endl
              << name << std::endl
              << surname << std::endl
              << midname << std::endl
              << age << std::endl
              << on_lesson << std::endl;
}
