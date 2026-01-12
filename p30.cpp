#include <iostream>
using namespace std;

int main(){
    int dmn;

    cout << "Enter a no. ";
    cin >> dmn;

    int ans = 0;
    int pow = 1;

    while (dmn > 0)
    {
        int rem = 0;
        rem = dmn%2;
        dmn = dmn/2;

        ans += (rem * pow);
        pow *= 10;

    }
    
    cout << ans << endl;
    
    return 0;
}