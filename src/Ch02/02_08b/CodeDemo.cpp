// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

//constants - values will not change (things like parameters)
// #define or regular variables

//arrays - collections of data (all of the same data type) - continuous in memory

#include <iostream>

// #define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4;

    // size of the array (capacity) in the brackets
    int age[AGE_LENGTH];
    float temperature[] = {31.5, 32.7, 38.9};

    //enter the index you want to assign in the brackets (index starts at 0)
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << std::endl;
    std::cout << "temperature[0] = " << temperature[0] << std::endl;
    std::cout << "temperature[1] = " << temperature[1] << std::endl;
    std::cout << "temperature[2] = " << temperature[2] << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
