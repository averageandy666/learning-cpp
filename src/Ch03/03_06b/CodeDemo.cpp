// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

// pointers are variables that store memory addresses. They can be used to manipulate data indirectly, and they are a powerful feature of C++. In this exercise, we will explore how to use pointers to access and modify data.

// & is the address-of operator, which returns the memory address of a variable. For example, if we have an integer variable x, we can get its address using &x.

// * is the dereference operator, which allows us to access the value stored at a memory address. For example, if we have a pointer p that points to an integer variable x, we can access the value of x using *p.

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr = &a; // ptr is a pointer to an integer, and it is initialized to the address of a
    std::cout << "The value of a is: " << a << std::endl; // prints the value of a
    std::cout << "The address of a is: " << &a << std::endl; // prints the address of a
    std::cout << "The value of ptr is: " << ptr << std::endl; // prints the value of ptr, which is the address of a
    std::cout << "The value pointed to by ptr is: " << *ptr << std::endl; // prints the value pointed to by ptr, which is the value of a
    std::cout << "The address of ptr is: " << &ptr << std::endl; // prints the address of ptr

    std::cout << std::endl << std::endl;
    return (0);
}
