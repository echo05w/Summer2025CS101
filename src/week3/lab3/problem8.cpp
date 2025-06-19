#include <iostream>
using namespace std;

int octal2DecHelper(int octalNumber, int position) {
    if (octalNumber == 0)
        return 0;
    int lastDigit = octalNumber % 10;
    return lastDigit * pow(8, position) + octal2DecHelper(octalNumber / 10, position + 1);
}

int octal2Dec(const int& octalNumber) {
    return octal2DecHelper(octalNumber, 0);
}

int main() {
    int octal;
    cout << "Enter an octal number: ";
    cin >> octal;
    cout << "Decimal equivalent: " << octal2Dec(octal) << endl;
    return 0;
}
