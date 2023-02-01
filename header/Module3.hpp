#pragma once

#include <Module1.hpp>

void appendStudentToFile(const Student &student);

void appendStudentToFile(const Student &student) {
    std::ofstream out_file("Students.txt", std::ios::app);
    if (out_file.is_open()) {
        writeStudentToFile(student);
        std::cout << "Student information successfully added to file" << std::endl;
    }
    else {
        std::cout << "Failed to open file" << std::endl;
    }
    out_file.close();
}