#include <iostream>
#include <cstdlib>
#include <ctime>

//No. Guessing Game

int main() {
    srand(time(NULL));

    int hn;
    int rndm = (rand() % 100) + 1;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> hn;

        if (hn > rndm) {
            std::cout << "Too high!" << std::endl;
        }
        else if (hn < rndm) {
            std::cout << "Too low!" << std::endl;
        }
        else {
            std::cout << "You won!" << std::endl;
        }

    } while (hn != rndm);

    return 0;
}
