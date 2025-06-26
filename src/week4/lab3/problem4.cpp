//
// Created by HASAN SOLIYEV on 26/06/25.
//
#include <iostream>
#include <iomanip>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int count = 0;
    int number = 2;

    while (count < 50) {
        if (number % 2 == 0 && isPalindrome(number)) {
            cout << setw(5) << number;
            count++;
            if (count % 5 == 0) cout << endl;
        }
        number++;
    }

    return 0;
}
