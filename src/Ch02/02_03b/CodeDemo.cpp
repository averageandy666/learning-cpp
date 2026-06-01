// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

// Integers are signed or unsigned --> int
//char (8 bits)
// stdint.h containes portable data types that specify lengths like uint32_t (unsigned 32 bit integer)
// floating point numbers --> Float, double (larger range and precision than float), long double
// Boolean --> bool --> {true, false}
// anything other than 0 is true, 0 is false
//Strings --> <string> is a class you need to use them
//Pointers --> pointers are references to existing variables.

//int: 123
//float: 23.0f
// double: 25.4
//char: 'a'
//string : "hello"

// assignments - operations
// arithmetic: + - * / %
// bitwise: & | ~ ^
// logical: && || !
// relational: == != > < >= <=
// pointer: * & ->

#include <iostream>

int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;

    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
