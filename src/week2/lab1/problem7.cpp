//
// Created by HASAN SOLIYEV on 09/06/25.
//
#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num ;
    int a=num/100;
    int b=num%10;
    if (a==b ) {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}