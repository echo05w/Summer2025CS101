//
// Created by HASAN SOLIYEV on 16/06/25.
//
#include <iostream>
using namespace std;
int product(int a, int b) {
    return a * b;
}
int main() {
 int a, b;
    cout << "Please enter two integers: ";
    cin >> a >> b;
   int result= product(a,b);
    cout<<"The product is "<<result<<endl;
    return 0;
}