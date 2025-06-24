//
// Created by HASAN SOLIYEV on 23/06/25.
//
#include <iostream>
using namespace std;
void bubble_sort(int array[],int size) {
for(int i=0;i<size;i++) {
    for(int j=0;j<size-i-1;j++) {
        if(array[j]>array[j+1]) {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }
    }
}
}
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++) {
        cin>>array[i];
    }
        bubble_sort(array,n);
    cout<<"Sorted array: ";
    for (int i=0;i<n;i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}