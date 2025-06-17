//
// Created by HASAN SOLIYEV on 17/06/25.
//
#include <iostream>
using namespace std;
void swap(int &a ,int &b) {
    a=a+b;
    b=a-b;
    a=a-b;
}
int main() {
 int a=5,b=3;
    swap(a,b);
    cout <<"A is = "<< a <<" B is = "<< b<< endl;
    return 0;
}