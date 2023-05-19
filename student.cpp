#include "student.h"
#include <iostream>

Student::Student(const People& people, std::string class_num)
    : People(people), class_num_(class_num) {}

void Student::show() const {
    People::show();
    std::cout << "班号：" << class_num_ << std::endl;
}
