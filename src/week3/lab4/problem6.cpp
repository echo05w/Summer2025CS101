#include <iostream>
using namespace std;

void character_types(char arr[], int n, int &up, int &low, int &d, int &s) {
    up = low = d = s = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 65 && arr[i] <= 90) {
            up++;
        } else if (arr[i] >= 97 && arr[i] <= 122) {
            low++;
        } else if (arr[i] >= 48 && arr[i] <= 57) {
            d++;
        } else {
            s++;
        }
    }
}

int main() {
    int n;
    cout << "Please enter a number: ";
    cin >> n;

    char arr[n];
    cout << "Enter " << n << " characters (no spaces): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int amountU, amountL, amountD, amountS;
    character_types(arr, n, amountU, amountL, amountD, amountS);

    cout << "Amount of U: " << amountU << endl;
    cout << "Amount of L: " << amountL << endl;
    cout << "Amount of D: " << amountD << endl;
    cout << "Amount of S: " << amountS << endl;

    return 0;
}
