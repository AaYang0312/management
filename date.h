#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date(int year, int month, int day);

    void show() const;

private:
    int year_;
    int month_;
    int day_;
};

#endif  // DATE_H
