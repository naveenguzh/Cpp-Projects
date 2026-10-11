#include <iostream>
using namespace std;

void sortbbl(int *ar, int *size) {

    for (int i = 0; i < *size; i++) {

        for (int j = 0; j < *size - i - 1; j++) {

            if (ar[j] > ar[j + 1]) {

                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;

            }
        }
    }
}

int main() {
    int size;
    int ar[size];
    cout<<"Enter the size of the array ";
    cin >> size;
    
    for(int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> ar[i];
    }

    
    sortbbl(ar, &size);

    cout << "Sorted array: ";

    for (int i = 0; i < size; i++) {
        cout << ar[i] << " ";
    }

    return 0;
}