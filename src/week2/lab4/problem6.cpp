//
// Created by HASAN SOLIYEV on 13/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    int r;
    int reversed_num=0;
    cout<<"Please enter a number: ";
    cin>>num;
    while(num>0) {
        r=num%10;
        num=num/10;
        reversed_num=reversed_num*10+r;
    }
    cout<<"The reverse number is "<<reversed_num<<endl;
}