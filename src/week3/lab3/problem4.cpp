//
// Created by HASAN SOLIYEV on 19/06/25.
//
#include <iostream>
using namespace std;
int sum_Of_digits(int num) {
    if(num==0) return 0;
     return num%10+sum_Of_digits(num/10);
}

int main() {
int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<sum_Of_digits(num)<<endl;
    return 0;
}