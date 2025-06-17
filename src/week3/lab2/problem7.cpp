//
// Created by HASAN SOLIYEV on 17/06/25.
//
#include <iostream>
using namespace std;

int value = 10;
void fun() {
    int value = 5;
    cout << "Inside fun(), value = " << value << endl;
}
int main() {
    int value = 3;
    cout << "Inside main(), value = " << value << endl;

    fun();

    cout << "Global value (using ::value) = " << ::value << endl;

    return 0;
}
