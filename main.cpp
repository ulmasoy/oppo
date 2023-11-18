
#include <locale>
#include "reader.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "CarInfo.h"  

using namespace std;

int main() {
    setlocale(0, "");
    std::vector<CarInfo> carList;
    readCarInfo(carList);
    displayCarInfo(carList);
    return 0;
}