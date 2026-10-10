#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    for (char &ch : text) {
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + 2) % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + 2) % 26 + 'A';
        }
    }

    cout << "Encrypted: " << text << endl;
    

    return 0;
}