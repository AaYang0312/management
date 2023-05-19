#ifndef TA_H
#define TA_H

#include "graduate.h"

class TA : public Graduate, public Teacher {
public:
    TA(const Graduate& graduate, const Teacher& teacher);

    void show() const;
};

#endif  // TA_H
