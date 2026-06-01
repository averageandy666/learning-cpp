// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

//enumeration - enum - a list of named integer constants
// usually operate in global space


#include <iostream>
#include <cstdint>

// dairy is 0, meat is 1, hide is 2, and pet is 3
enum class cow_purpose {dairy, meat, hide, pet};
//making them classes makes it so the compiler enforces correct yse of their distinct type
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main(){
    int meat = 8;
    int a;

    a = (int) cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
