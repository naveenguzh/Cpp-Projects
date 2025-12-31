#include <iostream>

//Leap Year Checker

int main(){

    int yr;

    std::cout << "Enter the year: ";
    std::cin >> yr;

    if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
    {
        std::cout << "It is a leap year!";
    }
    else
    {
        std::cout << "It is not a leap year! ";
    }
    
    
}
