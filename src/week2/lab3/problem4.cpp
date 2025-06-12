//
// Created by HASAN SOLIYEV on 12/06/25.
//
#include <iostream>
using namespace std;
int main() {
   int num;
    cin>>num;
    int count=0;
    for (int i=1;i<=num;i++) {
       if (num%i==0) {
           count++;
       }
    }
    if (count==2) {
        cout<<"YES Prime"<<endl;
    }else {
        cout<<"NOT Prime"<<endl;
    }
    return 0;
}