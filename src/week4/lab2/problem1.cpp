//
// Created by HASAN SOLIYEV on 24/06/25.
//
#include <iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
  int *ptr=a;
    for (int i = 0; i < 10; i++) {
        cout << *ptr << " "<<ptr<<endl;
        ptr++;
    }

    return 0;
}