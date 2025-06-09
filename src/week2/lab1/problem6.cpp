//
// Created by HASAN SOLIYEV on 09/06/25.
//
#include <iostream>
using namespace std;
int main(){
    char l;
    cin>>l ;
    if (l>='A' && l<='Z') {
       cout<<"Upppercase"<<endl;
    }else if(l>='a' && l<='z') {
        cout<<"Lowercase";
    }
    else{
        cout<<"Not a letter dude"<<endl;
    }
    return 0;
}