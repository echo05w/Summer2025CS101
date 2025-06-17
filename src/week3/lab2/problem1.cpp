//
// Created by HASAN SOLIYEV on 17/06/25.
//
#include <iostream>
using namespace std;
 void sayHello() {
    static int count=0;
     count++;
     cout << "Hello World! has been called " << count <<" times"<< endl;
}
int main() {
 sayHello();
    sayHello();
    sayHello();
    return 0;
}