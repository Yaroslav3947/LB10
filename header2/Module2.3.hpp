#pragma once

#include <Module2.2.hpp>

#include <string>

void printCos(const double &num);
void printSin(const double &num);
void printExp(const double &num);
void printTan(const double &num);
void printCtan(const double &num);
void printSqrt(const double &num);
void printFactorial(const long long &num);

void printCos(const double &num) {
    std::string message =  "Standart cos(" + std::to_string(num) + ") = " + std::to_string(std::cos(num)) + '\n' + 
                           "Own cos(" + std::to_string(num) + ") = " + std::to_string(ownCos(num)) + '\n';
    std::cout << message;
    writeMessageToFile(message);
    
}
void printSin(const double &num) {
   std::string message = "Standart sin("+ std::to_string(num) + ") = " + std::to_string(std::sin(num)) + '\n'
                        + "Own sin("+ std::to_string(num) + ") = " + std::to_string(ownSin(num)) + '\n'; 
   std::cout << message;
   writeMessageToFile(message);
}
void printExp(const double &num) {
   std::string message = "Standart ex("+ std::to_string(num) + ") = " + std::to_string(std::exp(num)) + '\n'
                        + "Own ex("+ std::to_string(num) + ") = " + std::to_string(ownExp(num)) + '\n';
   std::cout << message;
   writeMessageToFile(message);  
}
void printTan(const double &num) {
   std::string message = "Standart tg("+ std::to_string(num) + ") = " + std::to_string(std::tan(num)) + '\n' 
                        + "Own tg("+ std::to_string(num) + ") = " + std::to_string(ownTan(num)) + '\n';
   std::cout << message;
   writeMessageToFile(message); 
}
void printCtan(const double &num) {
   std::string message = "Standart ctg("+ std::to_string(num) + ") = " + std::to_string(1./std::tan(num)) + '\n'
                        + "Own ctg("+ std::to_string(num) + ") = " + std::to_string(ownCtan(num)) + '\n';
   std::cout << message;
   writeMessageToFile(message); 
}
void printSqrt(const double &num) {
   std::string message = "Standart sqrt(" + std::to_string(num) + ") = " + std::to_string(std::sqrt(num)) + '\n'
                        + "Own sqrt("+ std::to_string(num) + ") = " + std::to_string(ownSqrt(num)) + '\n';
   std::cout << message;
   writeMessageToFile(message); 
}
void printFactorial(const long long &num) {
   std::string message = "facorial (" + std::to_string(num) + ") = " + std::to_string(factorial(num)) + '\n';
   std::cout << message;
   writeMessageToFile(message); 
}