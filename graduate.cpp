#include "graduate.h"
#include <iostream>

Graduate::Graduate(const Student& student, std::string major, const Teacher& teacher)
    : Student(student), major_(major), teacher_(teacher) {}

void Graduate::show() const {
    std::cout << "TA:Graduate研究生身份=================" << std::endl;
    Student::show();
    std::cout << "专业：" << major_ << std::endl;
    std::cout << "导师：**********" << std::endl;
    teacher_.show();
}
