// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std:: vector<cow> cows;
    cows.push_back(cow("Elsie", 5, cow_purpose::dairy));
    cows.push_back(cow("Bessie", 3, cow_purpose::meat));
    cows.push_back(cow("Daisy", 4, cow_purpose::hide));
    cows.push_back(cow("Molly", 2, cow_purpose::pet));

    std::cout << "The first cow is " << cows[0].get_name() << " and she is " << cows[0].get_age() << " years old." << std::endl;
    std::cout << "The second cow is " << cows[1].get_name() << " and she is " << cows[1].get_age() << " years old." << std::endl;
    std::cout << "The third cow is " << cows[2].get_name() << " and she is " << cows[2].get_age() << " years old." << std::endl;
    std::cout << "The fourth cow is " << cows[3].get_name() << " and she is " << cows[3].get_age() << " years old." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
