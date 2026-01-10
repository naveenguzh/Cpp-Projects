#include <iostream>
using namespace std;

int main() {
    int ar[5] = {1, 2, 3, 4, 5};
    int sz = 5;
    int s = 0;
    int e = sz - 1;

    while (s < e) {
        int temp = ar[s];
        ar[s] = ar[e];
        ar[e] = temp;

        s++;
        e--;
    }

    for (int i = 0; i < sz; i++) {
        cout << ar[i] << " " ;
        

    }
    
    return 0;
}
