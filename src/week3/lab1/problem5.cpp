//
// Created by HASAN SOLIYEV on 16/06/25.
//
#include <iostream>
using namespace std;
long long Factorial(int n) {
    return n<=1 ? 1 : n*Factorial(n-1);
}
int main() {
    cout<<"Enter n: ";
    int num ;
    cin>>num;
    cout<<"Factorial of "<<num<<"="<<Factorial(num)<<endl;

}