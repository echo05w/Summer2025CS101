//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }
    int oddCount = 0;
    int evenCount = 0;
    int* p = arr;
    for (int i = 0; i < n; i++) {
        if (*(p + i) % 2 != 0) {
            oddCount++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            evenCount++;
        }
    }
    cout << "Number of odd elements: " << oddCount << endl;
    cout << "Number of even elements: " << evenCount << endl;
    delete[] arr;
    return 0;
}
