#pragma once

#include <Module2.1.hpp>

#include <map>
#include <cmath>
#include <string>
#include <fstream>
#include <iostream>
#include <functional>

enum class TrigonometricFunctions {
    COS = 1,
    SIN = 2,
    TAN = 3,
    CTAN = 4,
    SQRT = 5,
    FACT = 6,
    EXP = 7,
    QUIT = 8,
    OUTPUT_FILE = 9
};

double get_num();
int get_factorial_num();
void showPosibilities();
TrigonometricFunctions get_choice();
void writeMessageToFile(const std::string &message);


