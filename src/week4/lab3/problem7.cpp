//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Enter a real number: ";
    cin >> num;

    cout << "Address of variable: " << &num << endl;

    double* ptr = &num;

    cout << "Address stored in pointer: " << ptr << endl;
    cout << "Address of pointer itself: " << &ptr << endl;
    cout << "Value pointed by pointer: " << *ptr << endl;

    return 0;
}
