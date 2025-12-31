#include <iostream>
using namespace std;

//NUT

bool isEven(int n) {
    return (n % 2 == 0);
}

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void showMenu() {
    cout << "\n--- NUT ---\n";
    cout << "1. Check Even or Odd\n";
    cout << "2. Check Prime\n";
    cout << "3. Find Factorial\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice, num;

    do {
        showMenu();
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter a number: ";
            cin >> num;
        }

        switch (choice) {
            case 1:
                if (isEven(num))
                    cout << "Number is Even\n";
                else
                    cout << "Number is Odd\n";
                break;

            case 2:
                if (isPrime(num))
                    cout << "Number is Prime\n";
                else
                    cout << "Number is Not Prime\n";
                break;

            case 3:
                cout << "Factorial = " << factorial(num) << endl;
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
