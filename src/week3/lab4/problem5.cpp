//
// Created by HASAN SOLIYEV on 20/06/25.
//
#include <iostream>
using namespace std;
bool strictlyEqual(const int list1[], const int list2[],
int size) {
for (int i = 0; i < size; i++) {
    if (list1[i] != list2[i]) {
        return false;
    }
}
    return true;
}
int main() {
    int n;
    cout << "Please enter a number: ";
    cin >> n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cin >> arr1[i];
    }
    cout<<strictlyEqual(arr, arr1, n)<<endl;
    return 0;
}