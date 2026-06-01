// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 


// using namespace std; --> eliminates the need to specify where variables or function in the standard library are declared like cout, endl, etc.

#include <iostream>
#include <string>

int main(){
    std::string str;
    // std::flush makes sure that the output is completely sent to the terminal before waiting for the user input.
    std::cout << "Enter your name: " << std::flush;
    std::cin >> str;
    // Think you can use << or + to concatenate strings
    std::cout << "Nice to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
