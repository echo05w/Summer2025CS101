//
// Created by HASAN SOLIYEV on 20/06/25.
//
#include <iostream>
using namespace std;
float average (int arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum+= arr[i];
    }
    return sum/n;
}
int main() {
 int n;
    cout << "Please enter a number: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << average(arr, n) << endl;

    return 0;
}