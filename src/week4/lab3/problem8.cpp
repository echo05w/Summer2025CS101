//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
using namespace std;
void swapAandB(int &a, int &b) {
    a=a+b;
    b=a-b;
    a=a-b;
}
int main() {
   int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
   swapAandB(a,b);
    cout<<"After swapping a: "<<a<<" b: "<<b<<endl;
    return 0;
}