#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "date.h"

class People {
public:
    People(int id, std::string name, std::string gender, std::string id_card_num, const Date& birth_date);

    void show() const;

private:
    int id_;
    std::string name_;
    std::string gender_;
    std::string id_card_num_;
    Date birth_date_;
};

#endif  // PEOPLE_H
