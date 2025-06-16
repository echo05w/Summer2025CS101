//
// Created by HASAN SOLIYEV on 16/06/25.
//
#include <iostream>
using namespace std;

int Min(int a , int b, int c) {
 if (a<b&&a<c) {
  return a;
 }else if(b<a&&b<c) {
  return b;
 }else {
  return c;
 }
}
int Max(int a, int b, int c) {
 if (a>b&&a>c) {
  return a;
 }else if(b>a&&b>c) {
  return b;
 }else {
  return c;
 }
}
int main() {
 cout<<"Enter a , b , c : ";
 int a,b,c;
 cin>>a>>b>>c;
 int maximum=Max(a,b,c);
 int minimum=Min(a,b,c);
 cout<<"The maximum value is "<<maximum<<endl;
 cout<<"The minimum value is "<<minimum<<endl;

}