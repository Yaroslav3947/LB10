#pragma once

#include <map>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>

const int WIDTH = 20;
const int numOfSubjects = 3;

enum class Posibilities {
    QUIT = 'q',
    CLEARFILE = 'c',
    SHOWTABLE = 't',
    SHOWSTUDENT = 's',
    APPENDSTUDENT = 'a'
};

struct Student {
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

void printHeadLine();
void showPosibilities();
Posibilities getChoice();
void outputAllStudentsFromFile();
void printStudent(const Student &obj);
void inputInfoAboutStudent(Student &obj);


