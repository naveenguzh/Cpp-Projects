#include <iostream>
using namespace std;

int main()
{
    int bnr ;

    cout << "Enter a no. ";
    cin >> bnr;

    int ans = 0;
    int pow = 1;

    while (bnr > 0)
    {
        int rem = bnr % 10;
        ans += rem * pow;
        bnr = bnr / 10;
        pow *= 2;
    }

    cout << ans << endl;

    return 0;
}