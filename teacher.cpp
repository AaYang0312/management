#include "teacher.h"
#include <iostream>

Teacher::Teacher(const People& people, std::string title, std::string department)
    : People(people), title_(title), department_(department) {}

void Teacher::show() const {
    People::show();
    std::cout << "职务：" << title_ << std::endl;
    std::cout << "部门：" << department_ << std::endl;
}
