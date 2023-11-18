#ifndef DATA_H
#define DATA_H

#include <vector>
#include <fstream>
#include "CarInfo.h"

// Объявление функций
void readCarInfo(std::vector<CarInfo>& carList);
void displayCarInfo(const std::vector<CarInfo>& carList);

#endif // DATA_H