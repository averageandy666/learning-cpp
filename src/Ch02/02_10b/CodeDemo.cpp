// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

//type casting - specifying how to interperet a piece of data

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    //implicit type casting (value will get truncated)
    sgn = flt;
    unsgn = sgn;

    std::cout << "float: " << flt << std::endl;
    std::cout << "int32: " << sgn << std::endl;
    //explicit cast
    std::cout << "uint32: " << (int32_t) unsgn << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
