//
// Created by HASAN SOLIYEV on 16/06/25.
//
#include <iostream>
using namespace std;

int cubeOfDigits(int num) {
    int sum = 0;
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;  // cube of each digit
        temp /= 10;
    }
    return sum;
}

bool isAmstrong(int num) {
    return cubeOfDigits(num) == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isAmstrong(num)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
