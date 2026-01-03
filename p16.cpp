#include <iostream>
using namespace std;

int main(){
    int n ;
    int num = 1;

    cout << "Enter the no. ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num ++;
        }
        cout << endl;
    }
    
}