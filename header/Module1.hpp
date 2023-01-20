#pragma once 

#include <vector>
#include <iomanip>
#include <iostream>

const int WIDTH = 20;
const int numOfSubjects = 3;

enum class Posibilities {
    SHOWTABLE = 't',
    SHOWSTUDENT = 's'
};

struct Student {
    friend std::istream &operator>>(std::istream &in, Student &obj);
    friend std::ostream &operator<<(std::ostream &os, const Student &obj);
    std::string firstName;
    std::string lastName;
    std::string middlename;
    int mathMark;
    int languageMark;
    int programmingMark;
    double getAverageMark() const {
        return static_cast<double>(mathMark + languageMark + programmingMark) / numOfSubjects;
    } 
};