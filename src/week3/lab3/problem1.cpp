//
// Created by HASAN SOLIYEV on 19/06/25.
//
#include <iostream>
using namespace std;
int power (int num, int p) {
 if (p == 0) return 1;
    return num * power (num, p - 1);
}
int main() {
int a,b;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}