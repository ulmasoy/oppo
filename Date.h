#pragma once

#include <iostream>

struct Date {
    int day;
    int month;
    int year;

    void print(std::ostream& out) const;
    static Date create_from_stream(std::istream& stream);
};