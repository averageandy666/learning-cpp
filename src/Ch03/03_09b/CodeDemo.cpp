// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

// References: Aliases to existing variables, they do not have their own memory address, they are just another name for the same variable. EX: int i = 5; int &ref = i; ref is a reference to i, so ref and i are the same variable, they have the same memory address and the same value.

// Vectors are dynamic arrays, they can grow and shrink in size, they are implemented as a class in the C++ Standard Library, they are defined in the <vector> header, they are part of the std namespace, they are used to store a collection of elements of the same type, they are similar to arrays but they have more functionality, they can be accessed using the [] operator or the at() method, they can be resized using the resize() method, they can be added to using the push_back() method, they can be removed from using the pop_back() method, they can be cleared using the clear() method, they can be sorted using the sort() function from the <algorithm> header, they can be iterated using iterators or range-based for loops.

int main(){
    std::vector<int> primes; // Create an empty vector of strings
    primes.push_back(2); // Add elements to the vector
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);

    std::cout << "The vector has: " << primes.size() << " elements." << std::endl; // Output the size of the vector
    std::cout << "The first element is: " << primes[0] << std::endl; // Output the first element of the vector
    std::cout << "The last element is: " << primes[primes.size() - 1] << std::endl; // Output the last element of the vector
    
    std::cout << std::endl << std::endl;
    return (0);
}
