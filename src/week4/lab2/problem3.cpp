//
// Created by HASAN SOLIYEV on 24/06/25.
//

#include <iostream>
using namespace std;
int evenCount(const int* a, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            count += 1;
        }
    }
    return count;
}
int oddCount(const int* a, int size) {
    int countOdd = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 != 0) {
            countOdd += 1;
        }
    }
    return countOdd;
}
int main(){
int n;
    cout<<"Enter n: "<<endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = evenCount(arr, n);
    int result2 = oddCount(arr, n);
    cout << "THe amount of even is "<<result<<endl<<"The amount of odd is "<< result2<< endl;
    return 0;
}