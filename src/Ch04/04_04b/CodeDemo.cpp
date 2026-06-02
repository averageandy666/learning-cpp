// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

// for loops are used when the number of iterations is known beforehand. They consist of three parts: initialization, condition, and increment/decrement. The loop will continue to execute as long as the condition is true.

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average = 0.0f;

    // Calculate the average of the numbers in the vector using a for loop
    for (int i = 0; i < numbers.size(); i++) {
        average += numbers[i];
    }
    average /= numbers.size();
    std::cout << "The average of the numbers is: " << average << std::endl;

    average = 0.0f; // Reset average for the next calculation
    for (int num : numbers) { // Range-based for loop
        average += num;
    }
    average /= numbers.size();
    std::cout << "The average of the numbers using range-based for loop is: " << average << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
