#include <iostream>
#include "human.h"
#include "boss.h"
#include "student.h"

int main() {
    boss b("ya", "boss", "otvechay", 9, 1);
    student s("Mikhail", "Efremov", "Sergeevich", 18, 0);
    b.print();
    s.print();
    return 0;
}