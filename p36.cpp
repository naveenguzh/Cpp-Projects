#include <iostream>
using namespace std;
 
int main(){
    
    int cn;
    int sum=0;
    cout << "Enter the size of the array: ";
    cin >> cn;

    int nsum[cn];

    for (int i = 0; i < cn; i++){
        cout << "Enter number " << i + 1 << ": ";
        cin >> nsum[i];
    }

    for (int j = 0; j <cn; j++){
        sum = sum + nsum[j];
    }

    cout<<sum<<endl;

    return 0;
}