//
// Created by HASAN SOLIYEV on 12/06/25.
//
#include <iostream>
using namespace std;
int main() {
   int num;
    cin>>num;
   while (num>0) {
       cout<<num%10<<endl;
       num = num/10;
       cout<<"num is = "<<num<<endl;

   }
    return 0;
}