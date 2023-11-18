
#pragma once
#include "Date.h"
#include <fstream>
#include <string>

struct CarInfo {
    Date date;
    std::string carNumber;

    static CarInfo readCarInfoFromFile(std::ifstream& inputFile);
    void printCarInfo() const; 
};