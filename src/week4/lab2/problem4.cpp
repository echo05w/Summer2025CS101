//
// Created by HASAN SOLIYEV on 24/06/25.
//
#include <iostream>
using namespace std;
bool is_mirrored(const int* a, const int* b,int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[size-i-1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout<<"Enter n: "<<endl;
    cin >> n;
int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int result=is_mirrored(a,b,n);
    cout<<"If 0 false , otherwise "<<endl<<result<<endl;
    return 0;
}