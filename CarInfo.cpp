
#include "CarInfo.h"
#include "Date.h"
#include <iostream>

// Обновить определение функции, убрав static
void CarInfo::printCarInfo() const {
    std::cout << "Date: ";
    date.print(std::cout);
    std::cout << ", Сar number: " << carNumber << std::endl;
}

CarInfo CarInfo::readCarInfoFromFile(std::ifstream& inputFile) {
    CarInfo car;
    car.date = Date::create_from_stream(inputFile);
    inputFile >> car.carNumber;
    return car;
}