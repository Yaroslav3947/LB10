#include <Module2.1.hpp>

double get_num() {
    double num;
    std::cout << "Enter number:";
    std::cin >> num;
    return num;
}
int get_factorial_num() {
    int num;
    std::cout << "Enter num to find factorial:";
    std::cin >> num;
    return num;
}
void showPosibilities() {
    std::cout << "1 - cos" << std::endl
              << "2 - sin" << std::endl  
              << "3 - tg" << std::endl  
              << "4 - ctg" << std::endl  
              << "5 - sqrt" << std::endl  
              << "6 - factorial" << std::endl
              << "7 - exp" << std::endl
              << "8 - quit" << std::endl
              << "9 - output all info from file" << std::endl; 
}
TrigonometricFunctions get_choice() {
    int choice;
    showPosibilities();
    std::cout << "Enter your choice:" << std::endl;
    std::cin >> choice;
    return static_cast<TrigonometricFunctions>(choice);
}
void writeMessageToFile(const std::string &message) {
    std::ofstream fileWithMessages("TrigonometricFunctions.txt", std::ios::app);
    if (fileWithMessages.is_open()) {
        fileWithMessages << message << std::endl;
    } else {
        std::cout << "Failed to open file" << std::endl;
    }
    fileWithMessages.close();
}