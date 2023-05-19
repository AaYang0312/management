#ifndef STUDENT_H
#define STUDENT_H

#include "people.h"

class Student : public People {
public:
    Student(const People& people, std::string class_num);

    void show() const;

private:
    std::string class_num_;
};

#endif  // STUDENT_H
