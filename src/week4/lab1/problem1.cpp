//
// Created by HASAN SOLIYEV on 23/06/25.
//
#include <iostream>
using namespace std;
int find_element(int array[],int size,int element) {
    for (int i=0;i<size;i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}
int main() {
int n;
    cout << "Enter size of array: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++) {
        cin>>array[i];
    }
    cout<<find_element(array,n,1);
    return 0;
}