#include "ta.h"
#include <iostream>

TA::TA(const Graduate& graduate, const Teacher& teacher)
    : Graduate(graduate), Teacher(teacher) {}

void TA::show() const {
    Graduate::show();
    std::cout << "TA::Teacher老师身份=================" << std::endl;
    Teacher::show();
}
