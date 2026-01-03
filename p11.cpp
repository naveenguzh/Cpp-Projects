#include <iostream>
using namespace std;

int main(){
    char ch;

    cout << "Enter the character: ";
    cin >> ch;

    if ('a' <= ch && 'z' >= ch)
    {
        cout << "It is a lowercase" << '\n';
    }
    else
    {
        cout << "It is a uppercase" << '\n'; 
    }
    
    return 0;
    
}