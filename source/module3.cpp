#include <Module3.hpp>
#include <Module4.hpp>

void appendStudentToFile(const Student &stud) {
    std::ifstream in_file("Students.txt");
    std::ofstream out_file("buffer.txt", std::ios::app);
    Student student;
    while(in_file >> student.firstName >> student.lastName >> 
                student.middlename >> student.mathMark >> student.languageMark >> student.programmingMark) {
        out_file << student.firstName << student.lastName << 
        student.middlename << student.mathMark << student.languageMark << student.programmingMark;
    }

    if (out_file.is_open()) {
        writeStudentToFile(stud);
        std::cout << "Student information successfully added to file" << std::endl;
    }
    else {
        std::cout << "Failed to open file" << std::endl;
    }
    in_file.close();
    out_file.close();
    remove("Students.txt");
    rename("buffer.txt", "Students.txt");
    out_file.close();
}