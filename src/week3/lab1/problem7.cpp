#include <iostream>
using namespace std;

void displayEvenDigits(int num) {
    cout << "Even digits: ";
    bool found = false;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
            found = true;
        }
        num /= 10;
    }
    if (!found) cout << "None";
    cout << endl;
}

int main() {
    cout << "Please enter a number: ";
    int num;
    cin >> num;
    displayEvenDigits(num);
}
