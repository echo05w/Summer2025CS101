//
// Created by HASAN SOLIYEV on 09/06/25.
//
#include <iostream>
using namespace std;
int main(){
 int a , b,c;
 cin>>a>>b>>c;
if(a>b && a>c){
 cout<<"The largest number is "<<a<<"."<<endl;
}else if(b>a && b>c){
 cout<<"The largest number is "<<b<<"."<<endl;
}
else{
cout<<"The largest number is "<<c<<"."<<endl;
}
return 0;
}