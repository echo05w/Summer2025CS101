//
// Created by HASAN SOLIYEV on 17/06/25.
//
#include <iostream>
using namespace std;
int sum_numbers(int n) {
    if (n <= 1) return n;
    return n + sum_numbers(n - 1);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Sum is not defined for negative numbers." << endl;
    } else {
        cout << "Sum from 1 to " << n << " is " << sum_numbers(n) << endl;
    }

    return 0;
}
