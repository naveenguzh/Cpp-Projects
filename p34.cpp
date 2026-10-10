#include <iostream>
using namespace std;

int main() {
    string dp;
    cout << "Enter text: ";
    getline(cin, dp);

    for (char &ch : dp) {
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' - 2) % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' - 2) % 26 + 'A';
        }
    }

    cout << "Encrypted: " << dp << endl;
    

    return 0;
}