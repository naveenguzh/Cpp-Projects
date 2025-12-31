#include <iostream>

//Grade + Average Calculator

int main() {

    int sub;
    float scr, ttl = 0;

    std::cout << "Enter no. of subjects: ";
    std::cin >> sub;

    for (int i = 1; i <= sub; i++) {
        std::cout << "Enter the marks of subject " << i << ": ";
        std::cin >> scr;
        ttl += scr;
    }

    float avg = ttl / sub;
    char grd;

    if (avg >= 90) {
        grd = 'A';
    }
    else if (avg >= 80) {
        grd = 'B';
    }
    else if (avg >= 70) {
        grd = 'C';
    }
    else if (avg >= 60) {
        grd = 'D';
    }
    else {
        grd = 'F';
    }

    std::cout << "Avarage: " << avg;
    std::cout << "Grade: " << grd;

    return 0;
}
