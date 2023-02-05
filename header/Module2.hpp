#pragma once

#include <Module1.hpp>
#include <Module4.hpp>

Student get_Student(bool addMarks);
std::vector<Student> getStudentsFromFile();
void printNeededStudent(const std::vector<Student> &students, const Student &neededStudent);


