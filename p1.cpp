#include <iostream>
//Terminal Calculator

int main(){

    double n1;
    double n2;
    char op;

    std::cout << "Enter no1: ";
    std::cin >> n1;

    std::cout << "Operator (+,-,*,/): ";
    std::cin >> op;

    std::cout << "Enter no2: ";
    std::cin >> n2;

    switch (op)
    {
    case '+':
        std::cout << n1 + n2 << '\n';
        break;

    case '-':
        std::cout << n1 - n2 << '\n';
        break;

    case '*':
        std::cout << n1 * n2 << '\n';
        break;

    case '/':
        std::cout << n1 / n2 << '\n';
        break;
    
    default:
        std::cout << "Plz enter a valid operator!" << '\n';
        break;
    }

    return 0;
}
