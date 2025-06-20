//
// Created by HASAN SOLIYEV on 20/06/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
   cout << "Please enter a number: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    for (int i=1;i<n;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout <<"Min is: "<< min << " Max is: " << max << endl;
}