#pragma once

#include <Module2.2.hpp>

void printCos(const double &num);
void printSin(const double &num);
void printExp(const double &num);
void printTan(const double &num);
void printCtan(const double &num);
void printSqrt(const double &num);
void printFactorial(const long long &num);

void printCos(const double &num) {
    std::cout << "Standart cos("<< num << ") = " << std::cos(num) << std::endl; 
    std::cout << "Own cos("<< num << ") = " << ownCos(num) << std::endl; 
}
void printSin(const double &num) {
    std::cout << "Standart sin("<< num << ") = " << std::sin(num) << std::endl; 
    std::cout << "Own sin("<< num << ") = " << ownSin(num) << std::endl; 
}
void printExp(const double &num) {
    std::cout << "Standart ex("<< num << ") = " << std::exp(num) << std::endl; 
    std::cout << "Own ex("<< num << ") = " << ownExp(num) << std::endl;  
}
void printTan(const double &num) {
    std::cout << "Standart tg("<< num << ") = " << std::tan(num) << std::endl; 
    std::cout << "Own tg("<< num << ") = " << ownTan(num) << std::endl; 
}
void printCtan(const double &num) {
    std::cout << "Standart ctg("<< num << ") = " << 1./std::tan(num) << std::endl; 
    std::cout << "Own ctg("<< num << ") = " << ownCtan(num) << std::endl; 
}
void printSqrt(const double &num) {
    std::cout << "Standart sqrt("<< num << ") = " << std::sqrt(num) << std::endl; 
    std::cout << "Own sqrt("<< num << ") = " << ownSqrt(num) << std::endl; 
}
void printFactorial(const long long &num) {
    std::cout << "facorial (" << num << ") = " << factorial(num) << std::endl; 
}