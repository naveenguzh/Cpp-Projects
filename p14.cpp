#include <iostream>
using namespace std;

int main(){
    int n ;

    cout << "Enter a no. ";
    cin >> n;

    bool isprime = true;

    for (int i = 2; i <= n-1; i++)
    {
        if (n%i == 0)
        {
            isprime = false;
        }
        
    }
    
    if (isprime == true)
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "it is a non prime number" << endl;
    }
    
    return 0;
}