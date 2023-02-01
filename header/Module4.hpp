#pragma once

#include <Module1.hpp>

void clearFile();
int getNumOfStudents();
double getMark(const std::string &markType);
void inputData(const int &numberOfStudents);
void writeStudentToFile(const Student &student);
std::string getName(const std::string &nameType);

double getMark(const std::string &markType) {
    double mark;
    std::cout << "Enter " << markType << ":";
    std::cin >> mark;
    return mark;
}
int getNumOfStudents() {
    int num{0};
    std::cout << "Enter number of students to input:";
    std::cin >> num;
    return num;
}
std::string getName(const std::string &nameType) {
    std::string name;
    std::cout << "Enter " << nameType << ":";
    std::cin >> name;
    return name;
}
void clearFile() {
    std::ofstream studentsFile;
    studentsFile.open("Students.txt", std::ofstream::out | std::ofstream::trunc);
    studentsFile << "";
    std::cout << "File has been successfully cleaned...\n";
    studentsFile.close();
}
void writeStudentToFile(const Student &student) {
    std::ofstream outFile("Students.txt", std::ios::app);
    if (!outFile) {
        std::cout << "Can't open a file\n";
    }
    outFile << student.firstName << ' ' << student.lastName << ' ' << student.middlename
            << ' ' << student.mathMark << ' ' << student.languageMark << ' ' << student.programmingMark << '\n';
    outFile.close();
}
void inputData(const int &numberOfStudents) {
    Student student;
    for (int i{0}; i < numberOfStudents; i++) {
        std::cout << "Input info about sudent:\n";
        inputInfoAboutStudent(student);
        writeStudentToFile(student);
    }
}