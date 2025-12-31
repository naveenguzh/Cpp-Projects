#include <iostream>

double area(double length);
double volume(double length);

int main() {

    double in;

    std::cout << "Enter the length: ";
    std::cin >> in;

    double r = area(in);
    std::cout << r << " is the area." << '\n';

    double v = volume(in);
    std::cout << v << " is the volume." << '\n';
    
    return 0;

    
}

double area(double length) {
    return length * length;
}

double volume(double length) {
    return length * length * length;
}
