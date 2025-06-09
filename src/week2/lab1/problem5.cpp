//
// Created by HASAN SOLIYEV on 09/06/25.
//
#include <iostream>
using namespace std;
int main(){
    int a , b, c ;
    cin>>a>>b>>c;
    if (a+b>c&&a+c>b&&b+c>a) {
        cout<<"Yo dude its triangle and ";
        if (a==b && c==a && b==c) {
            cout<<" its Equilateral(ravnostoron)";
        }
        else if (a==b || c==a || b==c ) {
            cout<<" its Isosceles (ranobedr)";
        }
        else {
            cout<<" its Scalene(raznostoron)"<<endl;
        }
    }
    else{
        cout<<"Yo dude its not triangle"<<endl;
    }
    return 0;
}