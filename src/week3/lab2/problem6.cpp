#include <iostream>
using namespace std;

void reverseDigits(int &x) {
    int reversed = 0;
    int original = x;

    while (x != 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    x = reversed; // update the original variable using reference
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    reverseDigits(number);

    cout << "Reversed number: " << number << endl;

    return 0;
}
