#include "date.h"
#include <iostream>

Date::Date(int year, int month, int day)
    : year_(year), month_(month), day_(day) {}

void Date::show() const {
    std::cout << year_ << "-" << month_ << "-" << day_;
}
