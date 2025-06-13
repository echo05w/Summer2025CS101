//
// Created by HASAN SOLIYEV on 13/06/25.
//
#include <iostream>
using namespace std;
int main() {
 // int n;
 // int sum = 0;
 // cout << "Enter n: ";
 // cin >> n;
 // while (n>0) {
 //  sum=sum+n%10;
 //  n=n/10;
 // }
 // cout << sum<< endl;

 int n;
 int r;
 int sum = 0;
 cout << "Enter n: ";
 cin >> n;
 while (n>0) {
  r=n%10;
  sum += r;
  n=n/10;
 }
 cout << sum<< endl;
}