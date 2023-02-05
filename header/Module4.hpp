#pragma once

#include <Module1.hpp>

void clearFile();
int getNumOfStudents();
double getMark(const std::string &markType);
void inputData(const int &numberOfStudents);
void writeStudentToFile(const Student &student);
std::string getName(const std::string &nameType);

