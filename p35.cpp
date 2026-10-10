#include <iostream>
using namespace std;

string ect(string text){
    for (char &ch : text) {
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + 2) % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + 2) % 26 + 'A';
        }
    }
    return text;
}

string dct(string text){
    for (char &ch : text) {
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' - 2) % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' - 2) % 26 + 'A';
        }
        
    }
    return text;
}

int main() {
    string text;
    int choice;
    cout << "Enter text: ";
    getline(cin, text);
    
    cout << "1-Encrypt Text" << endl;
    cout << "2-Decrypt Text" << endl;
    cout << "Enter Your Choice: ";
    cin >> choice;

    if (choice == 1){
        string encrypted = ect(text);
        cout << "Encrypted: " << encrypted << endl;
    }
    else if (choice == 2){
        string decrypted = dct(text);
        cout << "Decrypted: " << decrypted << endl;
    }
    else{
        cout << "Invalid choice!" << endl;
    }


    return 0;
}