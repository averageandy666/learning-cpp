// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1023;
    bool flag = false;
    char lttr = 'd';

    if (a > 1000){
        std::cout << "a is greater than 1000" << std::endl;
    }

    if ((a%2) == 0){
        std::cout << "a is even" << std::endl;
    } else {
        std::cout << "a is odd" << std::endl;
    }

    std::cout << "The letter " << lttr << " is ";
    if ((lttr == 'a') || (lttr == 'e') || (lttr == 'i') || (lttr == 'o') || (lttr == 'u') || (lttr == 'A') || (lttr == 'E') || (lttr == 'I') || (lttr == 'O') || (lttr == 'U')){
        std::cout << "a vowel" << std::endl;
    } else {
        std::cout << "a consonant" << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
