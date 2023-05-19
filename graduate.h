#ifndef GRADUATE_H
#define GRADUATE_H

#include "student.h"
#include "teacher.h"

class Graduate : public Student {
public:
    Graduate(const Student& student, std::string major, const Teacher& teacher);

    void show() const;

private:
    std::string major_;
    Teacher teacher_;
};

#endif  // GRADUATE_H
