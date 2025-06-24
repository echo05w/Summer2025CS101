//
// Created by HASAN SOLIYEV on 24/06/25.
//

#include <iostream>
using namespace std;
int main(){
    float a[10]={};
    cout<<"Enter grades: "<<endl;
    float *ptr=a;
    for (int i = 0; i < 10; i++) {
        cin>>*ptr;
        *ptr = *ptr*0.3;
        ptr++;
    }
    ptr=a;
    for (int i = 0; i < 10; i++) {
        cout << *ptr << " ";
        ptr++;
    }


    return 0;
}