#include "reader.h"
#include <iostream>

void readCarInfo(std::vector<CarInfo>& carList) {
    std::ifstream inputFile("D:\\avtomobili.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        exit(1);
    }
    while (!inputFile.eof()) {
        CarInfo car = CarInfo::readCarInfoFromFile(inputFile);
        carList.push_back(car);
    }
    inputFile.close();
}

void displayCarInfo(const std::vector<CarInfo>& carList) {
    for (const CarInfo& car : carList) {
        car.printCarInfo();
    }
}