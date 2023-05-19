#include "date.h"
#include "people.h"
#include "teacher.h"
#include "student.h"
#include "graduate.h"
#include "ta.h"

int main() {
    Date t_d(1970, 1, 1);
    People t_p(14007, "李四", "man", "420107197001012020", t_d);
    Teacher t_t(t_p, "教授", "计算机科学与技术");

    Date s_d(1998, 2, 2);
    People s_p(2020001, "张三", "man", "420107199802022046", s_d);
    Student s_s(s_p, "2002");
    Graduate s_g(s_s, "计算机科学与技术", t_t);
    Teacher s_t(s_s, "讲师", "计算机科学与技术");
    TA ta(s_g, s_t);
    ta.show();

    return 0;
}
