// Learning C++ 
// Exercise 04_02
// Switch Statements, by Eduardo Corpeño 

// switch is a branching statement that allows you to choose between multiple options based on the value of a variable. It is often used as an alternative to if-else statements when you have multiple conditions to check.

#include <iostream>

int main(){
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> operand_1;
    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> operand_2;
    std::cout << "Choose operation [ + - * / ]: " << std::flush;
    std::cin >> operation;

    // switch goes here

    switch (operation) {
        case '+':
            result = operand_1 + operand_2;
            break;
        case '-':
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/':
            if (operand_2 != 0) {
                result = operand_1 / operand_2;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
                return (1);
            }
            break;
        default:
            std::cout << "Error: Invalid operation!" << std::endl;
            return (1);
    }

    std::cout << "The result is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
