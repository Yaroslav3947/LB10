#pragma once

#include <Module1.hpp>

Student getStudent();
void showPosibilities();
void showPosibilities();
Posibilities getChoice();
size_t getNumOfStudents();
std::string getName(const std::string& nameType);

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
Student getStudent() {
    Student neededStudent;
    neededStudent.firstName = getName("first name");
    neededStudent.lastName = getName("last name");
    neededStudent.middlename = getName("middle name");
    return neededStudent;
}
void showPosibilities() {
    std::cout << "Enter 't' to show table or 's' to show student:\n";
}
Posibilities getChoice() {
    showPosibilities();
    char choice;
    std::cin >> choice;
    while (choice != 't' && choice != 's') {
        std::cout << "Invalid choice. Please enter 't' or 's': ";
        std::cin >> choice;
    }
    return static_cast<Posibilities>(choice);
}
size_t getNumOfStudents() {
    auto num{0};
    std::cout << "Enter number of students to input:";
    std::cin >> num;
    return num;
}
std::string getName(const std::string& nameType) {
    std::string name;
    std::cout << "Enter "<<nameType<<":";
    std::cin >> name;
    return name;
}