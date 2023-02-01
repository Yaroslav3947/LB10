#pragma once

#include <map>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>

const int WIDTH = 20;
const int numOfSubjects = 3;

enum class Posibilities
{
    QUIT = 'q',
    CLEARFILE = 'c',
    SHOWTABLE = 't',
    SHOWSTUDENT = 's',
    APPENDSTUDENT = 'a'
};

struct Student
{
    // friend std::istream &operator>>(std::istream &in, Student &obj);
    // friend std::ostream &operator<<(std::ostream &os, const Student &obj);
    std::string firstName;
    std::string lastName;
    std::string middlename;
    int mathMark;
    int languageMark;
    int programmingMark;
    double getAverageMark() const
    {
        return static_cast<double>(mathMark + languageMark + programmingMark) / numOfSubjects;
    }
};

void printHeadLine();
void showPosibilities();
Posibilities getChoice();
void outputAllStudentsFromFile();
void printStudent(const Student &obj);
void inputInfoAboutStudent(Student &obj);

void printStudent(const Student &obj) {
    std::cout << std::setw(WIDTH) << std::left << obj.firstName
              << std::setw(WIDTH) << std::left << obj.lastName
              << std::setw(WIDTH) << std::left << obj.middlename
              << std::setw(WIDTH) << std::left << obj.mathMark
              << std::setw(WIDTH) << std::left << obj.languageMark
              << std::setw(WIDTH) << std::left << obj.programmingMark
              << std::setw(WIDTH) << std::left << obj.getAverageMark() << std::endl;
}
void inputInfoAboutStudent(Student &obj) {
    std::cout << "Enter first name:";
    std::cin >> obj.firstName;

    std::cout << "Enter last name:";
    std::cin >> obj.lastName;

    std::cout << "Enter middle name:";
    std::cin >> obj.middlename;

    std::cout << "Enter math mark:";
    std::cin >> obj.mathMark;

    std::cout << "Enter language mark:";
    std::cin >> obj.languageMark;

    std::cout << "Enter programming mark:";
    std::cin >> obj.programmingMark;
    std::cout << std::endl;
}
void printHeadLine() {
    std::cout << "===========================================================================================================================================\n";
    std::cout << std::setw(WIDTH) << std::left << "First name"
              << std::setw(WIDTH) << std::left << "Last name"
              << std::setw(WIDTH) << std::left << "Middle name"
              << std::setw(WIDTH) << std::left << "Math mark"
              << std::setw(WIDTH) << std::left << "Language mark"
              << std::setw(WIDTH) << std::left << "Programming mark"
              << std::setw(WIDTH) << std::left << "Average mark" << std::endl;
}
void outputAllStudentsFromFile() {
    std::ifstream studentsFile("Students.txt");
    if (!studentsFile) {
        std::cerr << "Failed to open Students.txt" << std::endl;
        return;
    }
    Student student;
    printHeadLine();
    while (studentsFile >> student.firstName >> student.lastName >> 
            student.middlename >> student.mathMark >> student.languageMark >> student.programmingMark) {
        printStudent(student);
    }
    studentsFile.close();
}
void showPosibilities() {
    std::cout << "Enter 't' to show table\n's' to show student\n'a' to append student\n'c' - clear file\nq' to quit:\n";
}
Posibilities getChoice() {
    showPosibilities();
    char choice;
    std::cin >> choice;
    choice = tolower(choice);
    while (choice != 't' && choice != 's' && choice != 'a' && choice != 'c' && choice != 'q') {
        std::cout << "Invalid choice. Please enter 't' or 's' or 'a' or 'c' or 'q': ";
        std::cin >> choice;
    }
    return static_cast<Posibilities>(choice);
}
