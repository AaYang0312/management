#include "people.h"
#include <iostream>

People::People(int id, std::string name, std::string gender, std::string id_card_num, const Date& birth_date)
    : id_(id), name_(name), gender_(gender), id_card_num_(id_card_num), birth_date_(birth_date) {}

void People::show() const {
    std::cout << "编号：" << id_ << std::endl;
    std::cout << "姓名：" << name_ << std::endl;
    std::cout << "性别：" << gender_ << std::endl;
    std::cout << "身份证号：" << id_card_num_ << std::endl;
    std::cout << "出生日期：";
    birth_date_.show();
    std::cout << std::endl;
}
