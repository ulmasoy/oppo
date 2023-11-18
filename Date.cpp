#include "Date.h"
#include <iostream>

using namespace std;

void Date::print(ostream& out) const {
    out
        << day << "."
        << month << "."
        << year;
}

Date Date::create_from_stream(istream& stream) {
    Date result;
    stream >> result.day;
    stream.get();
    stream >> result.month;
    stream.get();
    stream >> result.year;
    stream.get();
    return result;
}
