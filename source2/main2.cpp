#include <Module2.1.hpp>
#include <Module2.2.hpp>
#include <Module2.3.hpp>

// int main() {
//     TrigonometricFunctions choice;
//     std::map<TrigonometricFunctions, std::function<void(double)>> functions = {
//         {TrigonometricFunctions::COS, printCos},
//         {TrigonometricFunctions::SIN, printSin},
//         {TrigonometricFunctions::TAN, printTan},
//         {TrigonometricFunctions::CTAN, printCtan},
//         {TrigonometricFunctions::SQRT, printSqrt},
//         {TrigonometricFunctions::FACT, printFactorial},
//         {TrigonometricFunctions::EXP, printExp}
//     };
//     do {
//         choice = get_choice();
//         if (choice == TrigonometricFunctions::QUIT) {
//             break;
//         }
//         if (functions.find(choice) != functions.end()) {
//             functions[choice](get_num());
//         } else {
//             std::cout << "Invalid choice. Please try again." << std::endl;
//         }
//     } while(choice != TrigonometricFunctions::QUIT);
//     std::cout << "Thanks for using our program" << std::endl;
//     return 0;
// }
int main() {
    TrigonometricFunctions choice;
    do {
        choice = get_choice();
        if (choice == TrigonometricFunctions::QUIT) {
            break;
        }
        switch (choice) {
            case TrigonometricFunctions::COS:
                printCos(get_num());
                break;
            case TrigonometricFunctions::SIN:
                printSin(get_num());
                break;
            case TrigonometricFunctions::TAN:
                printTan(get_num());
                break;
            case TrigonometricFunctions::CTAN:
                printCtan(get_num());
                break;
            case TrigonometricFunctions::SQRT:
                printSqrt(get_num());
                break;
            case TrigonometricFunctions::FACT:
                printFactorial(get_num());
                break;
            case TrigonometricFunctions::EXP:
                printExp(get_num());
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while(choice != TrigonometricFunctions::QUIT);
    std::cout << "Thanks for using our program" << std::endl;
    return 0;
}
