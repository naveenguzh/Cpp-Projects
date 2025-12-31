#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0.0;
    int choice = 0;

    do
    {
        std::cout << "\nEnter your choice\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;

        case 2:
            balance += deposit();
            break;

        case 3:
            balance -= withdraw(balance);
            break;

        case 4:
            std::cout << "Thanks for visiting\n";
            break;

        default:
            std::cout << "Invalid choice\n";
        }

    } while (choice != 4);

    

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is: " << balance << '\n';
}

double deposit()
{
    double amount = 0.0;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    if (amount < 0)
    {
        std::cout << "Invalid amount\n";
        return 0;
    }

    return amount;
}

double withdraw(double balance)
{
    double amount = 0.0;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if (amount < 0)
    {
        std::cout << "Invalid amount\n";
        return 0;
    }
    else if (amount > balance)
    {
        std::cout << "Insufficient balance\n";
        return 0;
    }

    return amount;
}
