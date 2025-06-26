//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    double* arr = new double[n];
    cout << "Enter " << n << " double values:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }
    cout << "Values from end to front:\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
