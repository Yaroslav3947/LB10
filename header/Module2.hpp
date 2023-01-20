#include <Module1.hpp>

void printHeadLine();
void printData(std::vector<Student> &students);
void inputData(std::vector<Student> &students);
void printNeededStudent(const std::vector<Student> &students, const Student &neededStudent);

void printData(std::vector<Student> &students) {
    printHeadLine();
    for (const Student &student : students) {
        std::cout << student;
    }
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
void inputData(std::vector<Student> &students) {
    for(auto &student : students) {
        std::cout << "Input info about sudent:\n";
        std::cin >> student;
    }
}
void printNeededStudent(const std::vector<Student> &students, const Student &neededStudent) {
    bool flag = false;
    for (const auto &student : students) {
        if(neededStudent.firstName == student.firstName && neededStudent.lastName == student.lastName && 
            neededStudent.middlename == student.middlename) {
            printHeadLine();
            std::cout << student; flag = true;
        } 
        if(!flag) {
            std::cout << "We don't have this student in our school((" << std::endl;
        }
    }
}
