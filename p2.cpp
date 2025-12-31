#include <iostream>

//BMI Calculator

int main(){

    float wt;
    float h;
    

    std::cout << "Enter your weight in Kg: ";
    std::cin >> wt;

    std::cout << "enter your height in m: ";
    std::cin >> h;

    float bmi = wt / (h * h);

    std::cout << bmi << '\n';

    return 0;
}
