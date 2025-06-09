//
// Created by HASAN SOLIYEV on 09/06/25.
//
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, c ;
    cin>>a>>b>>c;
    float D=b*b-4*a*c;
    cout<<D<<endl;
    cout<<sqrt(D)<<endl;
    if (D>0) {
        cout<<"you have 2 , dude"<<endl;
    }else if(D==0) {
        cout<<"you have 1 , dude"<<endl;
    }else {
        cout<<"Nah"<<endl;
    }

    return 0;
}