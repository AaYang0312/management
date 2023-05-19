#ifndef TEACHER_H
#define TEACHER_H

#include "people.h"

class Teacher : public People {
public:
    Teacher(const People& people, std::string title, std::string department);

    void show() const;

private:
    std::string title_;
    std::string department_;
};

#endif  // TEACHER_H
