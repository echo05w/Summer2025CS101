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
    int sum = 0;
    for (int i = 0; i < n; i++) {
          sum+= arr[i];
    }
    cout<< "Sum of n is: "<<sum<<endl;
    return 0;
}