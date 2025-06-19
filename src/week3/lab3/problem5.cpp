//
// Created by HASAN SOLIYEV on 19/06/25.
//
#include <iostream>
using namespace std;
int multiplication(int num1, int num2) {
    if(num2==0){ return 0;}
    if (num2>0){return num1+multiplication(num1,num2-1);}
    else  {return -num1+multiplication(num1,num2-1) ;}

}

int main() {
    int a , b;
    cout<<"Enter a numbers: ";
    cin>>a>>b;
    cout<<multiplication(a,b)<<endl;
    return 0;
}