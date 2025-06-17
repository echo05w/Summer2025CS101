//
// Created by HASAN SOLIYEV on 17/06/25.
//
#include <iostream>
using namespace std;
void updateMax(int x) {
    static int max = INT_MIN;
    if (max < x) {
        max = x;
    }
    cout << "Max is:" << max << endl;
}
int main() {
    updateMax(5); // Max so far: 5
    updateMax(10); // Max so far: 10
    updateMax(3); // Max so far: 10
    return 0;
}