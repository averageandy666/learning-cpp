// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

// -> member access operator (->) is used to access members of an object through a pointer to that object.
// -> operator is a shorthand for dereferencing the pointer and then accessing the member, so my_cow_ptr->get_name() is equivalent to (*my_cow_ptr).get_name().

int main(){
    cow *my_cow_ptr = new cow("Gertie", 3, cow_purpose::hide);
    std::cout << my_cow_ptr->get_name() << " is a type-" << (int) my_cow_ptr->get_purpose() << " cow." << std::endl;
    std::cout << my_cow_ptr->get_name() << " is " << my_cow_ptr->get_age() << " years old." << std::endl;
    delete my_cow_ptr;
    
    std::cout << std::endl << std::endl;
    return (0);
}
