//
// Created by HASAN SOLIYEV on 12/06/25.
//
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;  // i squared
    }

    cout << "Sum of series 1*1 + 2*2 + ... + " << n << "*" << n << " = " << sum << endl;
    return 0;
}