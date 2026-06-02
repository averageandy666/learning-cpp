// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

// the while loop is a control flow statement that allows you to execute a block of code repeatedly as long as a specified condition is true. It is often used when the number of iterations is not known beforehand.

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    
    std::vector<int>::iterator ptr = numbers.begin();
    
    while (ptr != numbers.end()) {
        std::cout << *ptr << " ";
        ptr = next(ptr, 1); // Move the pointer to the next element
    }
    std::cout << std::endl;

    int i = 0;
    do{
        std::cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());
    
    std::cout << std::endl << std::endl;
    return (0);
}
