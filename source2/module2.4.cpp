#include <Module2.4.hpp>

void outputAllInfoFromFile() {
    std::ifstream in_file("TrigonometricFunctions.txt");
    std::string line{};
    while(getline(in_file, line)) {
        std::cout << line << '\n';
    }
}