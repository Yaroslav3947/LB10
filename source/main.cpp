#include <Module1.hpp>
#include <Module2.hpp>
#include <Module3.hpp>
#include <Module4.hpp>

int main() {
    std::cout << "Lets start\n";
    int numberOfStudents = getNumOfStudents();
    inputData(numberOfStudents);
    Posibilities choice;
    do {
        choice = getChoice();
        switch (choice) {
            case Posibilities::SHOWTABLE: {
                outputAllStudentsFromFile();
                break;
            }
            case Posibilities::SHOWSTUDENT: {
                Student neededStudent = get_Student(false);
                printNeededStudent(getStudentsFromFile(), neededStudent);
                break;
            }
            case Posibilities::APPENDSTUDENT: {
                Student studentToAppend = get_Student(true);
                appendStudentToFile(studentToAppend);
                break;
            }
            case Posibilities::CLEARFILE: {
                clearFile();
                break;
            }
            case Posibilities::QUIT: {
                std::cout << "Thanks for using my program...\n";
                break;
            }
        }
    } while(choice != Posibilities::QUIT);

    return 0;
}
