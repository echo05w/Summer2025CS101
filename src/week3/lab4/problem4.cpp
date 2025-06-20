//
// Created by HASAN SOLIYEV on 20/06/25.
//
#include <iostream>
using namespace std;
int indexOfLargestElement(double array[], int size) {
  int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (array[max_index]<array[i]) {
            max_index=i;
        }
    }
    return max_index;
}
int main() {
    int n;
    cout << "Please enter a number: ";
    cin >> n;
   double arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double max = arr[0];
    for (int i=1;i<n;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int index=indexOfLargestElement(arr,n);
    cout  << " Max is: " << max << " and its adress: "<<index << endl;

}