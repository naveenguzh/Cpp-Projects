#include <iostream>
using namespace std;

int main (){
    int ar[5] = {1,3,4,9,10};
    int size = 5;
    
    int max = __INT_MAX__ ;
    
    for (int i = 0; i < size; i++)
    {
        

        if (ar[i] < max)
        {
            max = ar[i];

        }
        
    }
    cout << max << endl ;

    return 0;
}