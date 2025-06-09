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
    cout<<"D is  "<<D<<endl;
    cout<<sqrt(D)<<endl;
    if (D>0) {
        cout<<"you have 2 , dude"<<endl;
        float x1, x2;
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<x1<<" =x1 \n"<<x2<<" =x2"<<endl;
    }else if(D==0) {
        float x=-b/(2*a);
        cout<<"you have 1 , dude"<<x<<endl;
    }else {
        cout<<"Nah"<<endl;
    }

    return 0;
}