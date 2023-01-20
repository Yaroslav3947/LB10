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

void printHeadLine();
void showPosibilities();
Posibilities getChoice();
void outputAllStudentsFromFile();

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
std::ostream &operator<<(std::ostream &os, const Student &obj) {
    os << std::setw(WIDTH) << std::left << obj.firstName  
    << std::setw(WIDTH) << std::left << obj.lastName  
    << std::setw(WIDTH) << std::left << obj.middlename  
    << std::setw(WIDTH) << std::left << obj.mathMark 
    << std::setw(WIDTH) << std::left << obj.languageMark  
     << std::setw(WIDTH) << std::left << obj.programmingMark 
     << std::setw(WIDTH) << std::left << obj.getAverageMark()  << std::endl;
    return os;
}
std::istream &operator>>(std::istream &in, Student &obj) {
        std::cout << "Enter first name:";
        in >> obj.firstName;
        
        std::cout << "Enter last name:";
        in >> obj.lastName;

        std::cout << "Enter middle name:";
        in >> obj.middlename;

        std::cout << "Enter math mark:";
        in >> obj.mathMark;

        std::cout << "Enter language mark:";
        in >> obj.languageMark;
        
        std::cout << "Enter programming mark:";
        in >> obj.programmingMark;
        std::cout << std::endl;
    return in;
}
void printHeadLine() {
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
    while (!studentsFile.eof()) {
        studentsFile >> student.firstName >> student.lastName >> student.middlename 
                    >> student.mathMark >> student.languageMark >> student.programmingMark;
        std::cout << student << std::endl;
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
    while (choice != 't' && choice != 's' && choice != 'a'  && choice != 'c' && choice != 'q') {
        std::cout << "Invalid choice. Please enter 't' or 's' or 'a' or 'c' or 'q': ";
        std::cin >> choice;
    }
    return static_cast<Posibilities>(choice);
}
