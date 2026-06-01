// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    // declare a string variable named str
    std::string str;

    // print message for user to input single name
    std::cout << "Please enter your first name: " << std::endl;

    // assign str to hold the input characters from terminal
    // cin only works for single words. If you want strings that have spaces need to use a special function.
    std::cin >> str;

    // print out contents of str with a message
    std::cout << "Hello there, " + str + "!";

    std::cout << std::endl << std::endl;
    return (0);
}
