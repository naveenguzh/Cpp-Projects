#include <iostream>
using namespace std;

int fon(int n) {
    int df = 1;

    while (n > 0) {
        int ld = n % 10;
        df *= ld;
        n /= 10;
    }

    return df;
}

int main() {
    int n;

    cout << "Enter a no. ";
    cin >> n;

    cout << fon(n);

    return 0;
}
