#include <iostream>
using namespace std;

int ls(int ar[], int sz){
    int target = 5;

    for (int i = 0; i < sz; i++)
    {
        if (ar[i] == target)
        {
            return i;
        }
        return -1;
        
    }
    
}

int main(){
    int ar[8] = {1,2,3,4,5,6,7,8};
    int sz = 8;

    ls(int ar[], int sz);q

}