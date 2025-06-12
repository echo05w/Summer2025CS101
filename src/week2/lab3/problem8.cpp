#include <iostream>
//
// Created by HASAN SOLIYEV on 12/06/25.
//
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}