#pragma once

#include <Module1.hpp>
#include <Module4.hpp>

Student get_Student(bool addMarks);
std::vector<Student> getStudentsFromFile();
void printNeededStudent(const std::vector<Student> &students, const Student &neededStudent);

Student get_Student(bool addMarks = false) {
    Student neededStudent;
    neededStudent.firstName = getName("first name");
    neededStudent.lastName = getName("last name");
    neededStudent.middlename = getName("middle name");
    if (addMarks) {
        neededStudent.mathMark = getMark("math mark");
        neededStudent.languageMark = getMark("language mark");
        neededStudent.programmingMark = getMark("programming mark");
    }
    return neededStudent;
}
std::vector<Student> getStudentsFromFile() {
    std::vector<Student> students;
    std::ifstream studentsFile("Students.txt");
    if (studentsFile.is_open()) {
        Student student;
        while (studentsFile >> student.firstName >> student.lastName >> 
                student.middlename >> student.mathMark >> student.languageMark >> student.programmingMark) {

            students.push_back(student);
        }
        studentsFile.close();
    }
    return students;
}
void printNeededStudent(const std::vector<Student> &students, const Student &neededStudent) {
    bool flag = false;
    for (const auto &student : students) {
        if (neededStudent.firstName == student.firstName && neededStudent.lastName == student.lastName &&
            neededStudent.middlename == student.middlename) {
            printHeadLine();
            printStudent(student);
            flag = true;
        }
    }
    if (!flag) {
        std::cout << "We don't have this student in our school((" << std::endl;
    }
}
