#include <Module1.hpp>
#include <Module2.hpp>
#include <Module3.hpp>

int main() {
    size_t numberOfStudents = getNumOfStudents();
    std::vector<Student> students(numberOfStudents);
    inputData(students);
    Posibilities choice = getChoice();
    switch (choice) {
        case Posibilities::SHOWTABLE: {
            printData(students);
            break;
        }
        case Posibilities::SHOWSTUDENT: {
            Student neededStudent = getStudent();
            printNeededStudent(students, neededStudent);
            break;
        }
        default: {
            std::cout << "We don't have this option" << std::endl;
            break;
        }
    }
    return 0;
}
